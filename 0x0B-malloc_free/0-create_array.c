#include "main.h"

/**
 * *create_array - create an array of chars and initialize it
 *
 * @size: array's size
 * @c: char initialized
 *
 * Return: zero or n
 */

char *create_array(unsigned int size, char c)
{
char *n = malloc(size);
if (size == 0)
return (0);
while (size--)
n[size] = c;
return (n);
}
