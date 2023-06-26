#include "main.h"

/**
* puts_half - print half string
*
* @str: string to be printed
*
*/

void puts_half(char *str)
{
int i;
for (i = 0; *str != '\0'; i++)
{
for ((i - 1) / 2; *str != '\0'; i++)
{
_putchar(*str);
}
}
_putchar('\n');
}
