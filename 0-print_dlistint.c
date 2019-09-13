#include "lists.h"

/**
  * print_dlistint - Print a double list
  * @h:	current double list
  * Return: Quantity elements in the double list
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
