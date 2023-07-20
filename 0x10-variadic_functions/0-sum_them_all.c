#include "variadic_variables.h"

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
int sum = 0, i;

va_list ap;

if (n == NULL)
return (0);

va_start(ap, n);

while (i--)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
