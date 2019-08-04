#include "lists.h"

/**
 * add_node_end - entry oint
 * @head:	list nodes
 * @str:	string entry
 * Return:	new_node into list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t  *new_node, *last_node;

	last_node = (*head);

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[i])
		i++;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = new_node;
		return ((*head));
	}

	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;
	return (last_node);
}
