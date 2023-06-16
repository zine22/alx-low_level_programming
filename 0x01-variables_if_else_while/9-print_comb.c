#include<stdio.h>

/**
* main - Entry point
*
* Return: always 0 (success)
*
* Description: print all single digits and separate them with func putchar
*/

int main(void)
{
char i = 48;

while (i <= 57)
{
putchar(i);
putchar(',');
putchar(' ');
i++;
}

return (0);
}
