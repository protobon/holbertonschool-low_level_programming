#include "lists.h"
#include <stdlib.h>

/**
  * insert_nodeint_at_index - inserts new node at nth index
  * @head: pointer to pointer to head of list
  * @idx: index to add new node to
  * @n: int, new node data
  * Return: pointer to new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL, *temp1 = NULL, *temp2 = NULL;
	unsigned int i = 0;

	if (*head)
	{
		temp1 = *head;
		new = malloc(sizeof(listint_t));
		if (new)
		{
			new->n = n;
			for (; i < idx - 1; i++)
			{
				temp1 = temp1->next;
			}
			temp2 = temp1->next;
			new->next = temp2;
			while (temp2->next)
			{
				temp2 = temp2->next;
			}
			temp1->next = new;
		}
		else
		{
			return (NULL);
		}
	}
	return (new);
}
