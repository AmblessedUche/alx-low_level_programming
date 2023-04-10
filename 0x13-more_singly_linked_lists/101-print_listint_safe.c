#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts number of nodes in a looped listint_t list.
 * @head: A pointer to the head of the listint_t list.
 * Return: If the list is not looped - 0.
 * Otherwise - the number of nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *king, *queen;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	king = head->next;
	queen = (head->next)->next;

	while (queen)
	{
	if (king == queen)
	{
	king = head;

	while (king != queen)
	{
	nodes++;
	king = king->next;
	queen = queen->next;
	}

	king = king->next;
	while (king != queen)
	{
	nodes++;
	king = king->next;
	}

	return (nodes);
	}

	king = king->next;
	queen = (queen->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
	for (; head != NULL; nodes++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	}
	else
	{
	for (index = 0; index < nodes; index++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
