#include "main.h"

/**
* *array_range - create an array of int
*
* @min: int
* @max: int
*
* Return: pointer
*/

int *array_range(int min, int max)
{
int len, i;
int *ptr;

if (min > max)
return (NULL);

len = max - min + 1;
ptr = malloc(sizeof(int) * len);

if (ptr == NULL)
return (NULL);

for (i = 0; i < len; i++)
ptr[i] = min++;

return (ptr);
}
