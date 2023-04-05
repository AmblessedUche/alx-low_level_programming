#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: points to the first node NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *node_1, *new;

	if (head != NULL)
	{
		node_1 = *head;

		while ((new = node_1) != NULL)
		{
			node_1 = node_1->next;
			free(new);
		}

		*head = NULL;
	}
}
