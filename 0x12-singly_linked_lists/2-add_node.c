#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
  * add_node - adds a new node at the beginning of list
  * @head: pointer to new node
  * @str: pointer to string within node
  * Return: pointer to head of list
  */
list_t *add_node(list_t **head, const char *str)
{
	char *scopy = NULL;
	list_t *ptr = NULL;

	if (str)
		scopy = strdup(str);
	ptr = malloc(sizeof(list_t));
	if (ptr && head)
	{
		ptr->str = scopy;
		if (scopy)
			ptr->len = strlen(scopy);
		ptr->next = *head;
		*head = ptr;
	}
	return (ptr);
}
