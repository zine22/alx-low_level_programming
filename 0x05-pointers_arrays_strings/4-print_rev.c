#include "main.h"

/**
* print_rev - print string but in reverse
*
* @s: character to be printed
*
*/

void print_rev(char *s)
{
while (*s != '\0')
{
_putchar(*s);
s--;
}
_putchar('\n');
}
