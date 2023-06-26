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
for (len = 0; *s != '\0'; s++)
{
_putchar(len);
len++;
}
return (len);
}
