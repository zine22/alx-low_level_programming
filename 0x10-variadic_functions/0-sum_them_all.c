#include "variadic_functions.h"

/**
* sum_them_all - returns the sum
*
* @n: member
*
* Return: always 0
*
*/

int sum_them_all(const unsigned int n, ...)
{
int i, sum = 0;

va_list arg;

if (n == 0)
return (0);

va_start(arg, n);
for (i = 0; i < (int) n; i++)
{
sum += va_arg(arg, int);
}
va_end(arg);
return (sum);
}
