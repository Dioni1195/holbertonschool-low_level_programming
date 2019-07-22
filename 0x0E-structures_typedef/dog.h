#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);
/**
* struct dog - Data sctruct to a dog
* @name: Name of the dog
* @age: Age of the dog
* @owner: owner of the dog
*
* Description: Data structure to storage all required information for a dog
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
