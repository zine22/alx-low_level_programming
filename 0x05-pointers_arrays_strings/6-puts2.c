#include "main.h"

/**
* puts2 - print every other character
*
* @str: string to be printed
*
*/

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
for (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}
