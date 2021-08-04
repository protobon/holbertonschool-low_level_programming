#include "lists.h"
#include <stdlib.h>
/**
  * free_listint - frees memory of pointer to list
  * @head: pointer to list
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

/**
  * free_listint2 - frees a list and points to NULL
  * @head: pointer to pointer to list
  */
void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}
