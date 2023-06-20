#include "main.h"

/**
* _isalpha - function to check if the character is a letter
*
* Return: return 1 if c is a letter and 0 if not
*
* int c - member
*/

int _isalpha(int c)
{
if (c >= 65 && c <= 90 && c >= 97 && c <= 122)
return (1);
return (0);
}
