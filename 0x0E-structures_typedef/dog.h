#ifndef DOG_H
#define DOG_H

/**
* struct dog - define new type with elements
*
* @name: char
* @owner: char
* @age: float
*/

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif
