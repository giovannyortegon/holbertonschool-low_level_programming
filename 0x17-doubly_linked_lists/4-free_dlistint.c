#include "lists.h"

/**
 * free_dlistint - entry point
 * @head: list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
