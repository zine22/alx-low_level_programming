#include "main.h"

/**
* print_diagonal - print a diagonal line
*
* Return: always 0
*
* @n: number of diagonal lines
*/

void print_diagonal(int n)
{
int n;
int i, j;
if (n > 0)
{
for (i = 1; i <= n; i++)
{

for (j = 1; j <= n; j++)
{
if (i == j)
_putchar('\\');
else
_putchar(' ');
}
_putchar('\n');
}
}
else
_putchar('\n');
return (0);
}
