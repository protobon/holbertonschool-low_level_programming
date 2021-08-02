#include "lists.h"
#include <stdlib.h>
/**
  * pop_listint - deletes head node of list
  * @head: pointer to pointer of head
  * Return: int, data of head or 0
  */
int pop_listint(listint_t **head)
{
	int tmp = 0;
	listint_t *temp = NULL;

	if (*head)
	{
		temp = *head;
		tmp = temp->n;
		*head = temp->next;
		free(temp);
	}
	return (tmp);
}
