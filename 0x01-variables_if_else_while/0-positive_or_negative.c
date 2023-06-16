#include<stdlib.h>
#include<time.h>

/**
 * Main - Entry point
 *
 * Description: assign a random number to var n
 *
 *Initial n:Declaration of n
 *
 * Return always zero (success)
*/

int main(void)
{
int n;

srand(time(o));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("the number is positive");
else if (n < 0)
printf("the number is negative");
else
printf("the number is zero");
return (0);
}
