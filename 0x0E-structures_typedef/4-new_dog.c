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
	int i;
	dog_t *p;
	/* reserving memory to struct*/
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	/* Cpunting name pointer*/
	while (name[i])
		i++;
	/* Reserving memeory to name */
	char *nm = (char *) malloc((i + 1) * sizeof(char));

	if (name == NULL)
	{
		free(p);
		return (NULL);
	}
	/* Counting string of owner */
	i = 0;
	while (owner[i])
		i++;
	/* Reserving memory to on*/
	char *on = (char *)malloc((i + 1) * sizeof(char));

	if (on == NULL)
	{
		free(p);
		free(nm);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		nm[i] = name[i];
	for (i = 0; owner[i]; i++)
		on[i] = owner[i];
	p->name = nm;
	p->age = age;
	p->owner = on;

	return (p);
}
