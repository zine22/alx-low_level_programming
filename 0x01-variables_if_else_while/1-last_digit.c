#include <stdlib.h>
#include <time.h>
/**
* Main - Entry point
*
* Return: Always 0 (Success)
*
*Description: Random number n and Last digit using printf function
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (Last digit of n > 5)
printf("Last digit of n is greater than 5");
else if (Last digit of n == 0)
printf("Last digit of n is 0");
else
printf("Last digit of n is less than 6 and not 0");
return (0);
}
