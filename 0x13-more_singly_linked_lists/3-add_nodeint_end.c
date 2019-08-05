#include "lists.h"

/**
 * add_nodeint_end - entry point
 * @head: double pointer to list
 * @n: date to enter in list
 * Return: lists with new nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n, *last;

	last = (*head);

	new_n = (listint_t *) malloc(sizeof(listint_t));

	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = new_n;
		return ((*head));
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_n;

	return (last);
}
