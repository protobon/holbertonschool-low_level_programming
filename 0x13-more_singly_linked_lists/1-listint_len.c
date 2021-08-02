#include "lists.h"
#include <stdio.h>
/**
  * listint_len - prints number of elements from a list
  * @h: pointer to list
  * Return: int, number of nodes
  */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h)
	{
		for (; h; i++)
		{
			h = h->next;
		}
	}
	return (i);
}
