#include<stdio.h>
/**
* main - Entry point
*
* Return: always 0 (success)
*
* Description: print numbers from 0 to 9 with func putchar
*/

int main(void)
{
int i = 48;
while (i <= 57)
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
