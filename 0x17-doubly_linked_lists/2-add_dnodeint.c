#include "lists.h"

/**
 * add_dnodeint - Entry function
 * @head: entry list
 * @n: value to a new node
 * Return: list modifica
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (new);

	new->n = n;
	new->prev = NULL;
	new->next = (*head);

	if ((*head) !=  NULL)
		(*head)->prev = new;

	(*head) = new;
	return (*head);
}
