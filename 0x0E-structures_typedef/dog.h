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

typedef struct dog dog_t;

void free_dog(dog_t *d);

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif
