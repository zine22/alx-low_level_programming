#include "main.h"

/**
* get_bit - returns the value of a bit
*
* @n: number
* @index: index
*
* Return: bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= 64)
return (-1);

n >>= index;
return (n & 1);
}
