#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - entry point
 * @name: string from main, name of pet
 * @age: number from main, age of pet
 * @owner: string from main, owner of pet
 * Return: p
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (0);
	else
	{
		if (name == NULL ||	(p->name = name) == NULL)
			return (NULL);
		p->age = age;
		if (owner == NULL || (p->owner = owner) == NULL)
			return (NULL);
		return (p);
	}
}
