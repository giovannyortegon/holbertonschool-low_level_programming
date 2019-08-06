#include "lists.h"

/**
 * delete_nodeint_at_index - entry point
 * @head: entry list
 * @index: position to delete
 * Return: 1 if it doesn't fail or -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp, *prev;

	tmp = (*head);

	if (tmp != NULL && index == 0)
	{
		(*head) = tmp->next;
		free(tmp);
		return (1);
	}

	while (tmp != NULL && index != i)
	{
		prev = tmp;
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL)
		return (-1);

	prev->next = tmp->next;
	free(tmp);

	return (1);
}
