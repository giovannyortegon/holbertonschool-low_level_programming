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
	unsigned int i = 0;
	dlistint_t *curr, *node, *new;

	curr = (*h);

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (new);
	/* if position is in index 0 */
	if ((*h) == NULL || idx == 0)
	{
		node = add_dnodeint(h, n);
		return (node);
	}
	else
	{	
		for(i = 0; curr != NULL && i < idx - 1; i++)
			curr = curr->next;
		
		new->n = n;
		new->next = curr->next;
		new->prev = curr;
		curr->next = new;
		if (new->next != NULL)
			new->next->prev = new;
		return (curr);
	}
	return (NULL);
}
