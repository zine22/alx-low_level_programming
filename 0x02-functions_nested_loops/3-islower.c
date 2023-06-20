#include "main.h"

/**
* _islower - function to check if character is lowercase
*
* @c: the character to be checked
*
* Return: 1 if c is lowercase and 0 for success
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
