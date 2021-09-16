#include "lists.h"

/**
  * add_dnodeint - adds a new node at beginning of dlistint
  * @head: pointer to head of list
  * @n: value of new node
  * Return: address of new node
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tmp = NULL;

	new = malloc(sizeof(dlistint_t));
	tmp = *head;
	if (new)
	{
		new->n = n;
		new->prev = NULL;
		new->next = tmp;
	}
	else
		return (NULL);
	if (tmp != NULL)
		tmp->prev = new;
	*head = new;
	return (new);
}
