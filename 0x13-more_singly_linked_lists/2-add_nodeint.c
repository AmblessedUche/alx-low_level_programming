#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: point the first node
 * @n: add a new node at the beginning
 * Return: new address if successful and NULL if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = (listint_t *)malloc(sizeof(listint_t));

	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;
	add->next = *head;
	*head = add;
	return (*head);
}
