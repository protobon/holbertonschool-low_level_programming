#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
  * add_node - adds a new node at the beginning of list
  * @head: pointer to new node
  * @str: pointer to string within node
  * Return: pointer to head of list
  */
list_t *add_node_end(list_t **head, const char *str)
{
	char *scopy = NULL;
	list_t *ptr = NULL;
	list_t *last = NULL;

	if (str)
		scopy = strdup(str);
	ptr = malloc(sizeof(list_t));
	if (ptr)
	{
		ptr->str = scopy;
		if (scopy)
			ptr->len = strlen(scopy);
		ptr->next = NULL;
		if (*head)
		{
			last = *head;
			while (last->next)
				last = last->next;
			last->next = ptr;
		}
		else
		{
			*head = ptr;
		}
	}
	return (ptr);
}
