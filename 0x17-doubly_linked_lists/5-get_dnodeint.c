#include "lists.h"

/**
 * get_dnodeint_at_index - entry point
 * @head: listo to search element accoding to position
 * @index: position of th element
 * Return: element if is differnte to NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *curr;

	if (head != NULL)
	{
		curr = head;
		while (curr != NULL)
		{
			if (i == index)
				return (curr);
			curr = curr->next;
			i++;
		}
		return (NULL);
	}
	return (NULL);
}
