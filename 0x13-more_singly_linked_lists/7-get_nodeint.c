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
	unsigned int i = 0;
	listint_t *temp = NULL;

	if (head)
	{
		temp = head;
		if (index == 0)
			return (head);
		for (; i < index; i++)
		{
			temp = temp->next;
		}
	}
	else if (!head && index)
	{
		return (NULL);
	}
	return (temp);
}
