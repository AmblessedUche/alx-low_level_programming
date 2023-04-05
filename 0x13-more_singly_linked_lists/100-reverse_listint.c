#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses the list listint_t.
 * @head: A pointer to an address to the head of listint_t list.
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *second;

	if (head == NULL || *head == NULL)
		return (NULL);
	second = NULL;

	while ((*head)->next != NULL)
	{
		first = (*head)->next;
		(*head)->next = second;
		second = *head;
		*head = first;
	}
	(*head)->next = second;
	return (*head);
}
