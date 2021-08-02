#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint_end - adds a new node at the end of list
  * @head: pointer to pointer of list
  * @n: int, data for new node
  * Return: pointer to new listi
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last = NULL, *temp = NULL;

	last = malloc(sizeof(listint_t));
	if (last)
	{
		last->n = n;
		last->next = NULL;
		if (*head)
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;
			temp->next = last;
		}
		else
		{
			*head = last;
		}
	}
	return (last);
}
