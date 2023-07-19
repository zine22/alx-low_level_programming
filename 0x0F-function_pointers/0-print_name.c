#include "function_pointers.h"

/**
* print_name - prints a name
*
* @name: the name
* @f: func pointer
*
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
if (f && name)
f(name);
}
