#include<stdio.d>

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
while (i <= 'Z')
{
putchar(i);
i++;
}
return (0);
}
