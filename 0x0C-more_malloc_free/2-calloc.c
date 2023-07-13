#include "main.h"

/**
* *_calloc - allocates memory using malloc
*
* @nmemb: array length
* @size: size of bytes
*
* Return: pointer
*/


void *_calloc(unsigned int nmemb, unsigned int size)
{
void *m;

if (size == 0 || nmemb == 0)
return (NULL);
m = malloc(sizeof(int) * nmemb);

if (m == 0)
return (NULL);

return (m);
}
