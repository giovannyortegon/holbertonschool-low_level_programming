#include "lists.h"

/**
 * add_dnodeint_end - entry list
 * @head: list main
 * @n: value for new node
 * Return: list modified
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *curr;

	curr = (*head);

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (new);
	/* create node */
	new->n = n;
	new->next = NULL;
	/* if it is empty */
	if ((*head) == NULL)
	{
		new->prev = NULL;
		(*head) = new;
		return (*head);
	}
	/* search NULL it is last podsition of the node */
	while (curr->next != NULL)
		curr = curr->next;
	/* and connect last node with the prev of new node */
	new->prev = curr;
	/* connect new node with next of last node */
	curr->next = new;
	return (curr);
}
