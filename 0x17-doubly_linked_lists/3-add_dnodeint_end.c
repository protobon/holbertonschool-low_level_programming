#include "lists.h"

/**
  * add_dnodeint_end - adds a new node at end of dlistint
  * @head: pointer to head of list
  * @n: new node data
  * Return: address of new node
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *last = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (last->next)
		last = last->next;

	last->next = new;
	new->prev = last;
	return (new);
}
