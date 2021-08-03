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
