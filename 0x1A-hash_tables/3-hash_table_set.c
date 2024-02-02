#include "hash_tables.h"

/**
* hash_table_set - func to add element to hash
* @ht: args
* @key: args
* @value: args
* Return: success 1 else 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int long i;
	hash_node_t *temp, *newnode;

	if ((key == NULL) || (ht == NULL))
	{
		return (0);
	}

	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);

	newnode->next = ht->array[i];
	ht->array[i] = newnode;
	return (1);
}
