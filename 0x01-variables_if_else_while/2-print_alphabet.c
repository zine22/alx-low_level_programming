#include<stdio.h>

/**
* main - entry point
*
*Return: always 0 'success)
*
*Description: to pring all alphabet we used a loop and putchar func
*/

int main(void)
{

char i = 'a';

while (i <= 'z')
{
putchar(i);
putchar('\n');
i++;
}
return (0);
}
