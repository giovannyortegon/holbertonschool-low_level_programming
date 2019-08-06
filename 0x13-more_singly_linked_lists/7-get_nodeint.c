#include "lists.h"

/**
 * get_nodeint_at_index - entry point
 * @head: content a list
 * @index: position to search
 * Return: give back the content of the position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *curr = head;

	if (curr == NULL)
		return (NULL);
	/* Search a position comparing with index entry */
	while (i != index)
	{
		i++;
		curr = curr->next;
	}
	if (index > i)
		return (NULL);
	/* Return position */
	return (curr);
}
