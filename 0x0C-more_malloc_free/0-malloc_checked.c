#include "main.h"

/**
* *malloc_cheched - allocate memory and terminate with 98 if failed
*
* @b: int
*
* Return: pointer to array or null
*/

void *malloc_checked(unsigned int b)
{
int *m = malloc(b);

if (m == 0)
exit(98);
return(m);
}
