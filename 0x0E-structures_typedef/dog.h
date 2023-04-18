#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: its name
 * @age: its age
 * @owner: also its owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif