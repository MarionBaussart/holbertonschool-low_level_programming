#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array (size of the hash table)
 * Return: pointer to the newly created hash table,
 * NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **array;


	/* allocate memory for the hash table ht */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;

	/* allocate memory for the array */
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	ht->array = array;

	return (ht);
}
