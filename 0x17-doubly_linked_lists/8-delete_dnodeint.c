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
  * delete_dnodeint_at_index - deletes node at given index
  * @head: head of node
  * @index: index to delete node
  * Return: 1 if success, -1 if failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del = *head;

	if (!*head || !head)
		return (-1);

	if (!index)
	{
		*head = del->next;
		if (del->next)
			del->next->prev = NULL;
		free(del);
		return (1);
	}
	del = get_dnodeint_at_index(*head, index);
	if (del == *head)
		*head = del->next;

	if (del->next != NULL)
		del->next->prev = del->prev;

	if (del->prev != NULL)
		del->prev->next = del->next;

	free(del);
	return (1);
}
