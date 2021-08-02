#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - adds a new node at the beginning of list
  * @head: pointer to pointer of list
  * @n: int, data for new node
  * Return: pointer to new list
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first = NULL;

	if (head)
	{
		first = malloc(sizeof(listint_t));
		if (first)
		{
			first->n = n;
			first->next = *head;
			*head = first;
		}
	}
	return (first);
}
