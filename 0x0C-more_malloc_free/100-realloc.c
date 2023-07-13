#include "main.h"

/**
* *_realloc - allocate a memory block with malloc and free
*
* @ptr: pointer to memory allocated
* @old_size: size of allocated space
* @new_size: size of new memory space
*
* Return: pointer or 0 or null
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *p;


if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
p = malloc(new_size);
if (p == NULL)
return (NULL);
return (p);
}
if (new_size > old_size)
{
p = malloc(new_size);
if (p == NULL)
return (NULL);

else
free(ptr);
}
return (p);
}
