#include "lists.h"
/**
  * list_len - returns number of elements in a list
  * @h: pointer to list_t
  * Return: int, list length
  */
size_t list_len(const list_t *h)
{
	size_t miss = 0;

	if (h)
		return (list_len(h->next) + 1);
	else
		return (miss);
}
