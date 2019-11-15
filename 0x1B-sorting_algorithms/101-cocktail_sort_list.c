#include "sort.h"

static int flag;

/**
 * list_len - function tha calculates the length of the list
 * @list: list to be checked
 * Return: the length of the list
 */
int list_len(listint_t *list)
{
	int i = 0;

	while (list)
	{
		list = list->next;
		i++;
	}

	return (i);
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

/**
 * bubble_tail - Function that order the last elements
 * @t1: temporal 1
 * @t2: temporal 2
 * @l: double linked list
 * @s: size of the linked list
 * @i: index of the loop
 */
void bubble_tail(listint_t **t1, listint_t **t2, listint_t **l, int s, int i)
{
	int j;
	static listint_t *tail;

	*t1 = *l, *t2 = (*t1)->next;

	for (j = 0; j < s - 1 - i; j++)
	{
		if ((*t1)->n > (*t2)->n)
		{
			swap_list(t1, t2);
			if ((*t2)->prev == NULL)
				*l = *t2;
			if ((*t1)->next == NULL)
				tail = *t1;
			print_list((listint_t *)(*l));
			*t2 = (*t1)->next;
			flag = 1;
		}
		else
		{
			*t1 = (*t1)->next;
			*t2 = (*t1)->next;
		}
	}
	if (flag == 0)
		return;
	*t1 = tail, *t2 = (*t1)->prev;
}

/**
 * bubble_head - Function that order the last elements
 * @t1: temporal 1
 * @t2: temporal 2
 * @l: double linked list
 * @s: size of the linked list
 * @i: index of the loop
 */
void bubble_head(listint_t **t1, listint_t **t2, listint_t **l, int s, int i)
{
	int j;

	for (j = 0; j < s - 1 - i; j++)
	{
		if ((*t1)->n < (*t2)->n)
		{
			swap_list(t2, t1);
			if ((*t1)->prev == NULL)
			{
				*l = *t1;
			}
			print_list((listint_t *)(*l));
			*t2 = (*t1)->prev;
		}
		else
		{
			*t1 = (*t1)->prev;
			*t2 = (*t1)->prev;
		}
	}
}

/**
 * cocktail_sort_list - Cocktail sort algorithm for double linked list
 * @list: double linked list to be sorted
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *temp1 = NULL, *temp2 = NULL;
	int i, size;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	size = list_len(*list);
	for (i = 0; i < size - 1; i++)
	{
		flag = 0;

		bubble_tail(&temp1, &temp2, list, size, i);

		if (flag == 0)
			return;

		bubble_head(&temp1, &temp2, list, size, i);
	}
}
