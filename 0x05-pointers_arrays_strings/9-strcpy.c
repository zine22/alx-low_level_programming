#include "main.h"

/**
* _strcpy - copies string pointed to by src
*
* @dest: character to be returned
* @src: character string
* Return: dest
*/

har *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
return (dest);
}
