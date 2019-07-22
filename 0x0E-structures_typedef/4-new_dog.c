#include "dog.h"
#include <stdlib.h>

/**
* _strlen - Calculate the lenght of string
* @s: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}
/**
 * *new_dog - Create a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: nd
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;
	char *nameP, *ownP;
	int tamName = _strlen(name), tamOwn = _strlen(owner), i;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);
	nameP = malloc(sizeof(char) * (tamName + 1));
	if (nameP == NULL)
	{
		free(nameP);
		free(nd);
		return (NULL);
	}
	ownP = malloc(sizeof(char) * (tamOwn + 1));
	if (ownP == NULL)
	{
		free(nameP);
		free(ownP);
		free(nd);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		nameP[i] = name[i];
	nameP[i] = '\0';
	nd->name = nameP;
	nd->age = age;
	for (i = 0; owner[i] != '\0'; i++)
		ownP[i] = owner[i];
	ownP[i] = '\0';
	nd->owner = ownP;
	return (nd);
}
