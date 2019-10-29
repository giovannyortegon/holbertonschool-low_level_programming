#include "sort.h"
/**
 * insertion_sort_list - method insertion sort
 * @list: a double linkend list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr = (*list)->next;

	if (list == NULL || (*list) == NULL)
		return;

	while (curr != NULL)
	{
		while (curr->prev != NULL && (curr->prev->n > curr->n))
		{
			curr->prev->next = curr->next;

			if (curr->next)
				curr->next->prev = curr->prev;

			curr->next = curr->prev;
			curr->prev = curr->prev->prev;
			curr->next->prev = curr;

			if (curr->prev == NULL)
				*list = curr;
			else
				curr->prev->next = curr;

			print_list(*list);
		}
		curr = curr->next;
	}
}
