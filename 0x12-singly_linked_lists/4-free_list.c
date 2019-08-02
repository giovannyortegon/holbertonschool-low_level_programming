-#include "lists.h"

/**
 * free_list - entry point
 * @head: entry list
*/
void free_list(list_t *head)
{
	if (head != NULL)
		free(head);
}
