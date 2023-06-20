#include "main.h"

/**
* print_sign - prints the sign of a number
*
* Return: 1 if the number is positive and 0 if else
*
* @n: the character to be checked
*/

int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar('+');
}
else if (n == 0)
{
return (0);
_putchar('0');
}
return (-1);
_putchar('-');
}
