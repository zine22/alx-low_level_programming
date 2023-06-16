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
while (i <= 'z')
{
putchar(i);
i++;
}
while (o <= 'Z')
{
putchar(o);
o++;
}
putchar('\n');
return (0);
}
