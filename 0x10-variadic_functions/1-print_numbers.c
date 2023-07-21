#include "variadic_functions.h"

/**
* print_numbers - prints numbers
*
* @separator: string
* @n: member
*
* Return: string
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list arg;

if (n == 0)
{
printf("\n");
return;
}

va_start(arg, n);
for (i = 0; i < n; i++)
{
printf("%d%s", va_arg(arg, int),
i ? (separator ? separator : "") : "\n");
}
va_end(arg);
}
