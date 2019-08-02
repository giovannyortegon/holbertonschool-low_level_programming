-#include "lists.h"

/**
 * free_list - entry point
 * @head: entry list
*/
void free_list(list_t *head)
{
	list_t *ptr = head;
	list_t *tmp;

	if (head != NULL)
	{
		tmp  = ptr->next;
		free(ptr);
		ptr = tmp;
	}
}
