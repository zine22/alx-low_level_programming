#include "variadic_functions.h"

/**
* print_all - func that prints anything
*
* @format: list of types
*
*
* Return: string
*/

void print_all(const char * const format, ...)
{
int i = 0, a;
char *separator = "";

va_list ap;

printf("\n");
return;

va_start(ap);
while (i--)
printf("%d", va_arg(ap);

va_end(ap);
}
