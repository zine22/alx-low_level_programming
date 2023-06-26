#include "main.h"

/**
* _strlen - function to return a length of a string
*
*@s: size of length
*
* Return: Always 0
*/

int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
_putchar(len);
s++;
len++;
}
return (len);
}
