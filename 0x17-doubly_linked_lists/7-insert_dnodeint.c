#include "lists.h"

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

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
	{
		free(new);
		return (add_dnodeint(h, n));
	}

	while (tmp)
	{
		if (idx == count)
		{
			new->next = tmp;
			new->prev = tmp->prev;
			tmp->prev = new;
			new->prev->next = new;
			return (new);
		}
		tmp = tmp->next;
		count++;
	}
	if (count > idx)
		return (NULL);
	else if (idx == count)
	{
		free(new);
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
