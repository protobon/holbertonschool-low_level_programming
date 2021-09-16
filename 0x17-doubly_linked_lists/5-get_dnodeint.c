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

	while (i < index && tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (tmp);
}
