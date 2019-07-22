#include "dog.h"
#include <stdlib.h>

/**
* free_dog - Frees the dogs
* @d: The pointer to data structure
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
