#include "lists.h"

/**
 * dlistint_len - entry of a list
 * @h:	entry list
 * Return:  lenght of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
