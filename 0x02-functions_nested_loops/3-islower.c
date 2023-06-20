#include "main.h"

/**
* main - Entry point
*
* Return: 1 if c is lowercase and 0 for success
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
