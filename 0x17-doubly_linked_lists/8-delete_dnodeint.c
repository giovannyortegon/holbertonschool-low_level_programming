#include "lists.h"

/**
 * delete_dnodeint_at_index - entry point
 * @head: list main
 * @index: position of element to delete
 * Return: list modified
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *curr = (*head);

	if ((*head) == NULL)
		return (-1);
	if (index == 0)
	{
		if (curr->next != NULL)
		{
			(*head) = (*head)->next;
			curr->next->prev = NULL;
		}
		else
			(*head) = NULL;
	}
	else if (curr->next != NULL)
	{
		for (i = 0; curr != NULL && i < index; i++)
			curr  = curr->next;
		curr->prev->next = curr->next;
		curr->next->prev = curr->prev;
	}
	else
	{
		curr = curr->prev;
		curr->prev->next = NULL;
	}
	free(curr);
	return (1);
}
