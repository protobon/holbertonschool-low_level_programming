#include "lists.h"
#include "5-get_dnodeint.c"

/**
  * insert_dnodeint_at_index - inserts new node at given idx
  * @h: pointer to head of list
  * @idx: index of new node
  * @n: new node data
  * Return: address of new node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new = NULL;
	unsigned int count = 0;

	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	if (idx > count)
		return (NULL);
	tmp = *h;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	tmp = get_dnodeint_at_index(*h, idx);
	if (tmp == *h)
	{
		tmp->prev = new;
		new->next = tmp;
		*h = new;
	}
	if (tmp->next == NULL)
	{
		tmp->prev->next = new;
		new->prev = tmp->prev;
		new->next = tmp;
	}
	if (tmp->prev)
	{
		tmp->prev->next = new;
		new->prev = tmp->prev;
		new->next = tmp;
		tmp->prev = new;
	}
	return (new);
}
