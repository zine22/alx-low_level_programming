#include "main.h"

/**
* print_triangle - print a triangle with size
*
*@size: number of # used to print triangle
*/

void print_triangle(int size)
{
int i;
int j;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if (i <= size - j)
_putchar('#');
else
_putchar('\n');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
