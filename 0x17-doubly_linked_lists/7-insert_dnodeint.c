#include "lists.h"
/**
 * insert_dnodeint_at_index - entry point
 * @h: entry list
 * @idx: position to add
 * @n: value of node
 * Return:  NULL if it fail or new node into list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0, p = idx - 1;
	dlistint_t *curr, *node, *new;

	curr = (*h);

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (new);
	while (curr != NULL)
	{
		/* if position is in index 0 */
		if (idx == 0)
		{
			node = add_dnodeint(h, n);
			return (node);
		}
		else if (i == p || i == idx)
		{
			new->n = n;
			new->next = curr->next;
			new->prev = curr;
			if (new->next != NULL)
				new->next->prev = new;
			curr->next = new;
			return (curr);
		}
		curr = curr->next;
		i++;
	}
	return (NULL);
}
