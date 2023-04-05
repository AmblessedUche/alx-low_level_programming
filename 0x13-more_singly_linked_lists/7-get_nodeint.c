#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node in listint_t list.
 * @head: A pointer to the head of the listint_t list.
 * @index: index of node to locate starting from 0.
 * Return: If the node doesn't exist - NuLL, otherwise the located node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node:

		for (node = 0; node < index; node++)
		{
			if (head == NULL)
				return (NULL);
			head = head->next;
		}
	return (head);
}
