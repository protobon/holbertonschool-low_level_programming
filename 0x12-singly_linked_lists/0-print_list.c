#include <stdio.h>
#include "lists.h"
/**
  * print_list - prints all elements of a list
  * @h: pointer to first element of list_t
  * Return: int, number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t error = 0;

	if (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		return (print_list(h->next) + 1);
	}
	else
	{
		return (error);
	}
}
