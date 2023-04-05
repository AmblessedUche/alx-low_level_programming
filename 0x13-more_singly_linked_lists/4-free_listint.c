#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: points to first node
 */

void free_listint(listint_t *head)
{
	listint_t *freeNode;

	while (head != NULL)
	{
		freeNode = head;
		head = head->next;
		free(freeNode);
	}
}
