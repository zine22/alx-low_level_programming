#include<stdio.h>

/**
* main - Entry point
*
* Return: always 0 (success)
*
* Description: print all alphabet except e and q with putchar func
*
*/

int main(void)
{
char i = 'a';

while (i <= 'z')
{
if (i == 'e' || i == 'q')
i++;
putchar(i);
i++;
}
putchar('\n');
return (0);
}
