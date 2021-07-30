#include "lists.h"
#include <stdlib.h>
/**
  * free_list - frees memory of pointer to list
  * @head: pointer to list
  */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
