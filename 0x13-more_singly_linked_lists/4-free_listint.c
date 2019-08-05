#include "lists.h"

/**
 * free_listint - entry point
 * @head:	list to free
 */
void free_listint(listint_t *head)
{
	listint_t *prev, *tmp;

	prev = head;

	while (prev != NULL)
	{
		tmp = prev->next;
		free(prev);
		prev = tmp;
	}
}
