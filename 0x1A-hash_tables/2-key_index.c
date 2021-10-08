#include "hash_tables.h"

/**
  * key_index - returns index of given key in hash table
  * @key: key from hash table
  * @size: size of ht
  * Return: index of key
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = (hash_djb2(key)) % size;
	return (idx);
}
