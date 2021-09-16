#include "lists.h"

/**
  * dlistint_len - count number of nodes in a dlistint
  * @h: head of list
  * Return: number of nodes
  */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = NULL;
	size_t i = 0;

	tmp = h;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
