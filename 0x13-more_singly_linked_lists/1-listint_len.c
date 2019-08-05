#include "lists.h"

/**
 * listint_len - entry point
 * @h: list to count
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int num_nodes = 0; /* Iterator to count*/

	while (h != NULL)
	{
		num_nodes++; /* To count*/
		h = h->next;
	}
	return (num_nodes);    /*number of nodes counted */
}
