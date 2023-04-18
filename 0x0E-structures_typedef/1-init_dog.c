#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: its name
 * @age: its age
 * @owner: its dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;

	if (d == NULL)
		d = &my_dog;

	(*d).age = age;
	(*d).name = name;
	(*d).owner = owner;
}
