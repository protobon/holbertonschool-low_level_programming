#include "hash_tables.h"

/**
  * hash_table_print - prints a hash table
  * @ht: hash table to print
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j;
	hash_node_t *tmp = NULL;

	if (!ht)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			printf("'%s': '%s'", tmp->key, tmp->value);
			while (tmp->next != NULL)
			{
				printf(", ");
				tmp = tmp->next;
				printf("'%s': '%s'", tmp->key, tmp->value);
			}
			for (j = i + 1; j < ht->size; j++)
			{
				if (ht->array[j] != NULL)
				{
					printf(", ");
					break;
				}
				else
					continue;
			}
		}
	}
	printf("}\n");
}
