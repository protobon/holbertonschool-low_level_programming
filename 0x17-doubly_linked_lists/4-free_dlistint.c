#include "lists.h"

/**
  * free_dlistint - frees a dlistint
  * @head: head of dlistint
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head, *next = NULL;

	while (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
}
