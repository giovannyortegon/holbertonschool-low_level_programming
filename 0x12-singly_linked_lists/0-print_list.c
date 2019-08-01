#include "lists.h"
/**
 * print_list - entry point
 * @h: list
 * Return: Alway number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] %p\n", h->str);
			h = h->next;
			n++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			n++;
		}
	}
	return (n);
}
