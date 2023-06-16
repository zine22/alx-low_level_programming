#include<stdio.h>

/**
* main - Entry point
*
* Return: is always 0 (success)
*
* Description: print alphabets in reverse with func putchar
*/

int main(void)
{
char i = 'z';
while (i >= 'a')
{
putchar(i);
i--;
}
putchar('\n');
return (0);
}
