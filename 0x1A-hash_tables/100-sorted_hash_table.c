#include "hash_tables.h"

/**
 * shash_table_create - creates a new hash table
 * @size: size of array of hash table
 * Return: pointer to new hash table, NULL if failed
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_table = NULL;
	shash_node_t **array = NULL;

	if (size == 0)
		return (NULL);

	shash_table = malloc(sizeof(shash_table_t));
	if (!shash_table)
		return (NULL);
	shash_table->size = size;
	array = calloc(size, sizeof(shash_node_t *));
	if (!array)
	{
		free(shash_table);
		return (NULL);
	}
	shash_table->array = array;
	shash_table->shead = NULL;
	shash_table->stail = NULL;
	return (shash_table);
}

/**
  * insert_node - inserts a new node to hash table
  * @h: pointer to hash_table node
  * @k: key of new node
  * @v: value of new node
  * Return: new node, or NULL if failed
  */
shash_node_t *insert_node(shash_node_t **h, const char *k, const char *v)
{
	shash_node_t *new = NULL;

	if (!h)
		return (NULL);
	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (NULL);
	new->key = strdup(k);
	new->value = strdup(v);
	new->sprev = NULL;
	new->snext = NULL;
	new->next = *h;
	*h = new;

	return (new);
}

/**
  * sorted_list_insert - inserts a shash_node into a doubly
  * linked list, sorted
  * @ht: hash table
  * @node: new node to insert into list
  */
void sorted_list_insert(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *tmp;

	if (!(ht->shead))
		ht->shead = node, ht->stail = node;
	else
	{
		for (tmp = ht->shead; tmp; tmp = tmp->snext)
			if (strcmp(node->key, tmp->key) <= 0)
			{
				node->snext = tmp;
				node->sprev = tmp->sprev;
				if (tmp->sprev)
					tmp->sprev->snext = node;
				else
					ht->shead = node;
				tmp->sprev = node;
				break;
			}
		if (!tmp)
		{
			ht->stail->snext = node;
			node->sprev = ht->stail;
			ht->stail = node;
		}
	}
}

/**
  * shash_table_set - adds an element to the hash table
  * @ht: hash table to add or update element
  * @key: key of element, str, can't be empty
  * @value: value of element, str, can be empty
  * Return: 1 if success, 0 if fail
  */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *tmp = NULL;

	if (!ht || !key || strlen(key) == 0 || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] != NULL)
	{
		tmp = ht->array[idx];
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
		if (!tmp)
		{
			tmp = insert_node(&(ht->array[idx]), key, value);
			if (!tmp)
				return (0);
			sorted_list_insert(ht, tmp);
			return (1);
		}
	}
	tmp = insert_node(&(ht->array[idx]), key, value);
	if (!tmp)
		return (0);
	sorted_list_insert(ht, tmp);
	return (1);
}

/**
  * shash_table_get - retrieves a value associated with a key
  * @ht: hash table to look for the key
  * @key: key to look for inside the ht
  * Return: value, or NULL if key not found
  */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	char *value;
	shash_node_t *tmp;

	if (!ht || !key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
		return (NULL);

	tmp = ht->array[idx];
	while (strcmp(tmp->key, key) != 0)
		tmp = tmp->next;
	value = strdup(tmp->value);

	return (value);
}

/**
  * shash_table_print - prints sorted elements from a ht
  * @ht: hash table to print
  */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht)
	{
		tmp = ht->shead;
		putchar('{');
		while (tmp)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			if (tmp->snext)
				printf(", ");
			tmp = tmp->snext;
		}
		puts("}");
	}
}

/**
* shash_table_print_rev - prints sorted elements from
* ht in reverse order
* @ht: hash table.
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht)
	{
		tmp = ht->stail;
		putchar('{');
		while (tmp)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			if (tmp->sprev)
				printf(", ");
			tmp = tmp->sprev;
		}
		puts("}");
	}
}

/**
 * free_node - frees a shash_node
 * @node: node
 */
void free_node(shash_node_t *node)
{
	if (node->key)
		free(node->key);
	if (node->value)
		free(node->value);
	free(node);
}

/**
  * shash_table_delete - deletes a ht
  * @ht: ht to delete
  */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp = ht->shead, *del;

	while (tmp)
	{
		del = tmp;
		tmp = tmp->snext;
		free(del->key);
		free(del->value);
		free(del);
	}
	free(ht->array);
	free(ht);
}
