#include "sort.h"

/**
 * insertion_sort_list - Insertion Sort Algorithm for a double linked list
 * @list: Double linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp1 = NULL, *temp2 = NULL, *temp3 = NULL;
	int k, flag;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (temp1 = (*list)->next; temp1; temp1 = temp1->next)
	{
		k = temp1->n;
		flag = 0;
		temp2 = temp1->prev;
		while (temp2 && k < temp2->n)
		{
			temp3 = temp2->next;
			swap_list(&temp2, &temp3);
			if (flag == 0)
				temp1 = temp2;
			if (temp3->prev == NULL)
				(*list) = temp3;
			print_list(*list);
			temp2 = temp3->prev;
			flag = 1;
		}
	}
}
/**
 * swap_list - function that swaps two nodes
 * @n1: node one
 * @n2: node two
 */
void swap_list(listint_t **n1, listint_t **n2)
{
	listint_t *prev = NULL, *next = NULL;

	prev = (*n1)->prev;
	next = (*n1);

	(*n1)->prev = (*n2);
	(*n1)->next = (*n2)->next;
	(*n2)->prev = prev;
	(*n2)->next = next;

	if ((*n2)->prev)
		(*n2)->prev->next = (*n2);
	if ((*n1)->next)
		(*n1)->next->prev = (*n1);
}
