#include "lists.h"
#include <stdlib.h>

/**
  * create_nodeint - creates new listint_t node
  * @n: data of new node
  * Return: pointer to new node
  */
listint_t *create_nodeint(int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new)
	{
		new->n = n;
		new->next = NULL;
	}
	return (new);
}

/**
  * get_nodeint_at_index - gets the nth node of a list
  * @head: pointer to head node
  * @index: index of node to return
  * Return: pointer to indexed node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head && index)
		return (NULL);
	if (index == 0)
		return (head);
	return (get_nodeint_at_index(head->next, index - 1));
}

/**
  * insert_nodeint_at_index - inserts new node at nth index
  * @head: pointer to pointer to head of list
  * @idx: index to add new node to
  * @n: int, new node data
  * Return: pointer to new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL, *prev = NULL;

	if (*head)
	{
		new = create_nodeint(n);
		if (!new)
			return (NULL);
		new->next = get_nodeint_at_index(*head, idx);
		if (!idx)
			*head = new;
		else
		{
			prev = get_nodeint_at_index(*head, idx - 1);
			if (!prev)
			{
				free(new);
				return (NULL);
			}
			prev->next = new;
		}
	}
	else
	{
		return (NULL);
	}
	return (new);
}
