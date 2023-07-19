#include "function_pointers.h"

/**
* int_index - searches for an int
* @array: array
* @size: size of array
* @cmp : pointer to a func to compair
*
* Return: i or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (array && size && cmp)
while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
else
return (-1);
}
