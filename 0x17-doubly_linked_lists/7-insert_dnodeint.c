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

/**
  * insert_dnodeint_at_index - inserts new node at given idx
  * @h: pointer to head of list
  * @idx: index of new node
  * @n: new node data
  * Return: address of new node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev_node = *h, *new = NULL;

	if (prev_node)
		prev_node = get_dnodeint_at_index(prev_node, idx - 1);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = prev_node->next;
	prev_node->next = new;
	new->prev = prev_node;

	if (new->next != NULL)
		new->next->prev = new;

	return (new);
}
