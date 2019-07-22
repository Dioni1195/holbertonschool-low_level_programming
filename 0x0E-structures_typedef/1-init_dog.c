#include "dog.h"

/**
* init_dog - Initialize a structure
* @d: a pointer to a structure
* @name: The name of the dog
* @age: The age of the dog
* @owner: The owner of the dog
*
* Return: Save the data
*
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
