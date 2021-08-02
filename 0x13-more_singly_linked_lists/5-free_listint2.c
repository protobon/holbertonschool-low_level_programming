#include "lists.h"
#include <stdlib.h>

/**
  * free_listint2 - frees a list and sets head to NULL
  * @head: pointer to first element of list
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	temp = NULL;
}
