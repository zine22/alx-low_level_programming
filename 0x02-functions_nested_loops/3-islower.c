#include "main.h"

/**
* _islower - function to check if character is lowercase
*
* member c: int
* Return: 1 if c is lowercase and 0 for success
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
