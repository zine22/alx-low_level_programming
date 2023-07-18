#include "dog.h"
#include <stdio.h>

/**
* print_dog - print a struct dog
*
* @d: member
*
* Return: void
*/

void print_dog(struct dog *d)
{
if (d)
{

printf("name: %s\n", d->name);

printf("owner: %s\n", d->owner);

printf("age: %f\n", d->age);
}

}
