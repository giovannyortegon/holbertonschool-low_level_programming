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
		return (NULL);	
	char *nm = malloc(sizeof(*nm) + 1);
	if (nm == NULL)
		return (NULL);
	char *on = malloc(sizeof(*nm) + 1);
	if (on == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(p);	
		free(nm);
		free(on);
		return (NULL);
	}
	else
	{
		nm = name;
		p->name = nm;
	}
	p->age = age;
	if (owner == NULL)
	{
		free(p);
		free(nm);
		free(on);
		return (NULL);
	}
	else
	{
		on = owner;
		p->owner = owner;
	}
	return (p);
}
