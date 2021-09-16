#include "lists.h"

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
	while (index > 0)
	{
		del = del->next;
		if (!del)
			return (-1);
		index--;
	}
	if (del == *head)
		*head = del->next;

	if (del->next != NULL)
		del->next->prev = del->prev;

	if (del->prev != NULL)
		del->prev->next = del->next;

	free(del);
	return (1);
}
