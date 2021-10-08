#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size of array of hash table
 * Return: pointer to new hash table, NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_hash_table = malloc(sizeof(hash_table_t));
	hash_node_t **array = NULL;

	if (!my_hash_table)
		return (NULL);
	if (size == 0)
		return (NULL);

	my_hash_table->size = size;
	array = calloc(size, sizeof(hash_node_t *));

	if (!array)
	{
		free(my_hash_table);
		return (NULL);
	}
	my_hash_table->array = array;
	return (my_hash_table);
}
