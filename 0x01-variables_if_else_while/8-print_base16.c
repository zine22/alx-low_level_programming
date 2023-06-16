#include<stdio.h>

/**
* main - Entry point
*
* Return: always 0 (success)
*
* Description: print all numbers of base 16 with func putchar
*/

int main(void)
{
char i = 48;
char a = 97;
while (i <= 57)
{
putchar(i);
i++;
}
while (a <= 102)
{
putchar(a);
a++;
}
return (0);
}
