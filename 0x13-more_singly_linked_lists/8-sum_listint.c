#include "lists.h"
#include <stdlib.h>

/**
  * sum_listint - sums all the data(n) of a list
  * @head: pointer to head of list
  * Return: int, sum of n
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = NULL;

	if (head)
	{
		while (head->next)
		{
			temp = head;
			sum += temp->n;
			head = temp->next;
		}
		sum += head->n;
	}
	return (sum);
}
