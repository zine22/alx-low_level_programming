#include <main.h>

/**
* print_line - to print lines
*
* Return: always 0
*
* @n: random number
*/

void print_line(int n)
{
int n;
int m;

if (n > 0)
{
for (m = 0; m < n; m++)
{
_putchar('_');
}
_putchar('\n');
}
else
_putchar('\n');
}
return (0);
}
