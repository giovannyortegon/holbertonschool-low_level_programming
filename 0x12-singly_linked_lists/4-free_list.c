#include "lists.h"

/**
 * free_list - entry point
 * @head: entry list
*/
void free_list(list_t *head)
{
	list_t *tmp;
	list_t *prev = head;

	while (prev != NULL)
	{
		tmp = prev->next;
		free(prev->str);
		free(prev);
		prev = tmp;
	}
}
