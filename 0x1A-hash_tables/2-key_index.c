#include "hash_tables.h"

/**
* key_index - func to give index of a key
* @key: args
* @size: args
* Return: index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
