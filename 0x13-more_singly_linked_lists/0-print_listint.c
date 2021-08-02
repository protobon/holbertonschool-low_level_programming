#include "lists.h"
#include <stdio.h>
/**
  * print_listint - prints all elements of a list
  * @h: pointer to list
  * Return: pointer to head of list
  */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h)
	{
		for (; h; i++)
		{
			printf("%d\n", h->n);
			h = h->next;
		}
	}
	return (i);
}
