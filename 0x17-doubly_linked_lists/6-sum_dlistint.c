#include "lists.h"

/**
 * sum_dlistint - entry point
 * @head: list to add
 * Return:  result to add
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
