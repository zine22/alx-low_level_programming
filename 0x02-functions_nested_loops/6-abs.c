#include "main.h"

/**
* _abs - computes the absolute value of an int
*
* Return: Always 0 (success)
*
* @n: the integer to be checked
*/

int _abs(int n)
{
if (n < 0)
{
n = n * (-1);
}
else
{
return (n);
}
return (0);
}
