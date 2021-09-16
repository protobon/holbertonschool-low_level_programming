#include "lists.h"

/**
  * get_dnodeint_at_index - gets node of dlistint at idx
  * @head: head of list
  * @index: index node
  * Return: address of node at index
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	if (index == 0)
		return (head);
	while (i < index && tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (tmp);
}

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
	if (tmp->next && tmp->prev)
	{
		tmp->prev->next = new;
		new->prev = tmp->prev;
		new->next = tmp;
		tmp->prev = new;
	}
	return (new);
}
