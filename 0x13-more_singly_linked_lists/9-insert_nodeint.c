#include "lists.h"

/**
 * insert_nodeint_at_index - entry point
 * @head: a list
 * @idx: position of new node
 * @n: new date
 * Return: new node or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_n, *curr;
	unsigned int i = 0;

	curr = (*head);

	new_n = (listint_t *) malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	if ((*head) != NULL)
	{
		while (curr != NULL)
		{
			if (idx == 0)
			{
				new_n->next = curr;
				curr = new_n;
				(*head) = curr;
				return ((*head));
			}
			else if (i == idx - 1)
			{
				new_n->next = curr->next;
				curr->next = new_n;
				return (curr);
			}
			else if (curr->next == NULL)
			{
				curr->next = new_n;
				return (curr);
			}
			curr = curr->next;
			i++;
		}
	}
	new_n->next = NULL;
	(*head) = new_n;
	return ((*head));
}
