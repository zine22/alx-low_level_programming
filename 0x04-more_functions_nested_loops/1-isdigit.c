#include "main.h"

/**
* _isdigit - check if c is a digit
*
* @c: character to be checked
*
* Return: 1 if c is a digit and 0 if not
*/

int _isdigit(int c)
{

while (c == 48 && c <= 57)
{
return (1);
}
return (0);
}
