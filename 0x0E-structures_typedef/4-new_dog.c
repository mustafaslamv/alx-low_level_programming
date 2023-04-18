#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: its name
 * @age: its age
 * @owner: its owner
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		return (NULL);
	}
	my_dog->age = age;

	if (name != NULL)
	{
		my_dog->name = malloc(strlen(name) + 1);
		if (my_dog->name == NULL)
		{
			free(my_dog);
			return (NULL);
		}
		else
		{
			strcpy(my_dog->name, name);
		}
	}
	if (owner != NULL)
	{
		my_dog->owner = malloc(strlen(owner) + 1);

		if (my_dog->owner == NULL)
		{
			free(my_dog->name);
			free(my_dog);
			return (NULL);
		}
		else
		{
			strcpy(my_dog->owner, owner);
		}
	}
	return (my_dog);
}
