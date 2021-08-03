#include "lists.h"
#include <stdlib.h>

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
  * delete_nodeint_at_index - deletes a node at index
  * @head: pointer to pointer to head of list
  * @index: index of node to delete
  * Return: 1 if success, -1 if error
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL, *next = NULL, *prev = NULL;

	if (*head)
	{
		temp = *head;
		if (index == 0)
		{
			*head = temp->next;
			free(temp);
		}
		temp = get_nodeint_at_index(*head, index - 1);
		if (temp)
		{
			next = temp->next;
			prev = get_nodeint_at_index(*head, index - 2);
			prev->next = next;
			free(temp);
		}
		else
		{
			return (-1);
		}
	}
	else
	{
		return (-1);
	}
	return (1);
}
