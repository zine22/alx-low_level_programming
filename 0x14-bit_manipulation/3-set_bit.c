#include "main.h"

/**
* set_bit - sets the value of a bit
*
* @n: number
* @index: index
*
* Return: 1 or -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= 64)
return (-1);

*n |= (1 << index);
return (1);
}
