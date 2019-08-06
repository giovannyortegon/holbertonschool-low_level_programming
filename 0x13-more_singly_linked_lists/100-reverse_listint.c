#include "lists.h"

/**
 * reverse_listint - entry pointer
 * @head:	entry list
 * Return:  reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old, *rev = NULL, *new_n;

	new_n = (listint_t *) malloc(sizeof(listint_t));
	rev = (listint_t *) malloc(sizeof(listint_t));

	old = (*head);

	while (old != NULL)
	{
		new_n = old->next;
		old->next = rev;

		rev = old;
		old = new_n;
	}
	(*head) = rev;
	return ((*head));
}
