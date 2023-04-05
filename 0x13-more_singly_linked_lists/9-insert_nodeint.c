#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at index in listint_t list.
 * @head: A pointer to the address of the head of listint_t list.
 * @idx: The index where the new node will be added starting from 0.
 * @n: The integer for the new node.
 * Return: If the function fails  NULL, Otherwise the address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *copy = *head;
	unsigned int node;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
	newNode->next = copy;
	*head = newNode;
	return (newNode);
	}
	for (node = 0; node < (idx - 1); node++)
	{
	if (copy == NULL || copy->next == NULL)
	return (NULL);
	copy = copy->next;
	}

	newNode->next = copy->next;
	copy->next = newNode;

	return (newNode);
}
