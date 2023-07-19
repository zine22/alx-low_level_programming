#include "function_pointers.h"

/**
* array_iterator - a func that execute func
*
* @array: an array
* @size: the size of array
* @action: func pointer
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array && size && action)
action(*array++);
}
