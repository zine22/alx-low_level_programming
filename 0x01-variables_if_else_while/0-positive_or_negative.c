#include<stdio.h>

/**
* Main - Entry point
*
* Return: Always 0 (success)
*
* Description: false or true validation and print with printf func
*/

int main(void)
{
int n;
srand(time(o));
n = rand() - RAND_MAX / 2;


if (n > 0)
{
printf("the number is positive");
}
else if (n < 0)
{
printf("the number is negative");
}
else
{
printf("the number is zero");
}
return (0);
}
