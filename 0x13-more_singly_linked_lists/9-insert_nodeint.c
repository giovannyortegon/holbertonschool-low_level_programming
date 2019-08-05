#include "lists.h"

/**
 * insert_nodeint_at_index - entry point
 * @head: a list
 * @idx: position of new node
 * @n: new date
 * Return: new node or NULL if it fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_n, *curr;

	unsigned int i = 0;

	curr = (*head);

	new_n = (listint_t *) malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;

	while (curr != NULL)
	{
		if (i == idx - 1)
		{
			new_n->next = curr->next;
			break;
		}
		i++;
		curr = curr->next;
	}
	curr->next = new_n;

	if (idx > i)
		return (NULL);

	return (curr);
}
