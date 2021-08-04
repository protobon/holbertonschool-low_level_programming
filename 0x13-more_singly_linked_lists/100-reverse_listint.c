#include "lists.h"
#include <stdio.h>

/**
  * reverse_listint - reverses a singly linked list
  * @head: pointer to pointer to list
  * Return: pointer to new reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL, *prev = NULL;

	if (*head)
	{
		prev = *head;
		temp = prev->next;
		*head = prev->next;
		prev->next = NULL;
		while (*head)
		{
			*head = (*head)->next;
			temp->next = prev;
			prev = temp;
			temp = *head;
		}
		*head = prev;
	}
	else
		return (NULL);
	return (*head);
}
