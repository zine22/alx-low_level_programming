#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
*
* Return: Always 0 (success)
*
* Description: false or true validation
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;


if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n);
}
else
{
printf("%i is zero\n", n);
}
return (0);
}
