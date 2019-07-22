#include "dog.h"
#include <stdio.h>

/**
 * print_dog -entry point
 * @d: Entry of struct
 */
void print_dog(struct dog *d)
{

	if (d->name == NULL)
		d->name = NULL;
	if (d->age == 0)
		d->age = 0;
	if (d->owner == NULL)
		d->owner = NULL;
	if (d != NULL)
	{
		printf("Name: %s\n",  d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
