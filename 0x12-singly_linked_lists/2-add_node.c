#include "lists.h"
/**
 * add_node - entry point
 * @head: list entry
 * @str: entry name for list
 * Return: name list fill.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	int i = 0;

	while (str[i])
	{
		i++;
	}

	new = (list_t *) malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = (*head);

	(*head) = new;

	return (*head);
}
