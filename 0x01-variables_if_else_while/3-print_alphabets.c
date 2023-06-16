#include<stdio.h>

/**
* main - entry point
*
* Return: always 0 (Success)
*
* Description: print alfabet lowercase and upper with func putchar
*/

int main(void)
{
char i = 'a';
char o = 'A';
while (i <= 'z' && o <= 'Z')
{
putchar(i);
i++;
putchar(o);
o++;
}
return (0);
}
