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
