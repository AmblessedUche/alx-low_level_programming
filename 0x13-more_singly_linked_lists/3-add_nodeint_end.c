#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 * @head: points to the first node
 * @n: points to the current node
 * Return: address if successful and NULL is failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *endNode = *head;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	endNode = *head;

	if (endNode == NULL)
		*head = newNode;
	else
	{
		while (endNode->next != NULL)
		endNode = endNode->next;
		endNode->next = newNode;
	}
	return (*head);
}
