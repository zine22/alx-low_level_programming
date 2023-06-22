#include "main.h"

/**
* more_numbers - print numbers from 0 to 14, 10 times
*
* Return: always 0
*
*/

void more_numbers(void)
{
int a;
int b;
for (a = 0; a <= 10; a++)
{
for (b = 0; b <= 14; b++)
_pitchar(b);
}
_putchar('\n');
return (0);
}
