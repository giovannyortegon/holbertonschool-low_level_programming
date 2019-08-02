-#include "lists.h"

/**
 * free_list - entry point
 * @head: entry list
*/
void free_list(list_t *head)
{
	int i = 0;
	if (head != NULL)
	{
		while (head[i])
			free(head[i]);
		free(head);
	}
}
