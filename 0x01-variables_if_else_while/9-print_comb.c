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
char c = 1;

while (i <= 57)
{
putchar(i);
i++;
}
return (0);
}
