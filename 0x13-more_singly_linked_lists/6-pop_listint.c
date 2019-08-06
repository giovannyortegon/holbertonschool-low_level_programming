#include "lists.h"

/**
 * pop_listint - entry point
 * @head: pointer to pointer that store a list
 * Return: Number deleted
 */
int pop_listint(listint_t **head)
{
	int num = 0;

	listint_t *prev;

	if ((*head) == NULL)
		return (0);

	prev = (*head);

	num = prev->n;

	(*head) = prev->next;
	free(prev);

	return (num);
}
