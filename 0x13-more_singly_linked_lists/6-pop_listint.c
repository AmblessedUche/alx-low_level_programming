#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: points to first node
 * Return: head node date(n)
 */

int pop_listint(listint_t **head)
{
	int key;
	listint_t *del;

	if (*head == NULL)
		return (0);
	del = *head;
	key = del->n;
	*head = (*head)->next;
	free(del);
	return (key);
}
