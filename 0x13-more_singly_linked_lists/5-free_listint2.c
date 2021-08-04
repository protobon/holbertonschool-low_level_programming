#include "lists.h"
#include <stdlib.h>

/**
  * free_listint2 - frees a list and sets head to NULL
  * @head: pointer to first element of list
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!*head)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}
