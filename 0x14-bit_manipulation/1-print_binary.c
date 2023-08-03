#include "main.h"

/**
* print_binary - prints the binary
*
* @n: decimal
*
*
*/

void print_binary(unsigned long int n)
{
unsigned long int m;
int i;

if (n == 0)
_putchar('0');
for (m = 0, i = 0; n > 0; i++, n >>= 1)
{
m <<= 1;
m |= (1 & n);
}

for (; i; m >>= 1, i--)
_putchar((1 & m) +'0');
}
