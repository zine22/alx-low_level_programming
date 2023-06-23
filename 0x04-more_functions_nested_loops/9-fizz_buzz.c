#include <stdio.h>

/**
* main - Entry point
*
* Return: always 0
*/

int main(void)
{
int n = 100;
int i;

for (i = 1; i <= n; i++)
{
while (n % 3)
{
printf("Fizz ");
}
while (n % 5)
{
printf("Buzz ");
}
while (n % 3 && n % 5)
{
printf("Fizz Buzz ");
}
printf("%d ", i);
}
return (0);
}
