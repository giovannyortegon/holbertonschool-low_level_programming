#include "lists.h"

/**
 * sum_listint - entry point
 * @head:	list of numbers
 * Return:	add all numbers in list
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *curr;

	curr = head;

	if (curr == NULL)
		return (0);

	while (curr != NULL)
	{
		add += curr->n;
		curr = curr->next;
	}

	return (add);
}
