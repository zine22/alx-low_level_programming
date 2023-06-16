#include<stdlib.h>
#include<time.h>

/**
* Main - Entry point
*
* Return: Always 0 (success)
*
* Description: print if number sorted is positive or negative using if;else and printf function
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
