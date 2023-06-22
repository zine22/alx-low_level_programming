#include "main.h"

/**
* print_square - print a square with #
*
* Return: always 0
*
* @size: the size of a square printed
*/

void print_square(int size)
{
int size;
int i, j;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');

return (0);
}
