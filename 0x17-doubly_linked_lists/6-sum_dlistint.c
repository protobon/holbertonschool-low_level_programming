#include "lists.h"

/**
  * sum_dlistint - sums all data of a dlistint
  * @head: head of list
  * Return: int, sum
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
