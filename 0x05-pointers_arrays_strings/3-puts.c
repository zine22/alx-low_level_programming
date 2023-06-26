#include "main.h"

/**
* _puts - print string
*
* @str: the string to be printed
*
*/

void _puts(char *str)
{
while (*str != '\0')
{
_puts(*str);
}
_puts('\n');
}
