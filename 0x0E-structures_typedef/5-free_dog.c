#include "dog.h"
#include <stdio.h>
/**
 * free_dog - frees dogs
 * @d: struc dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
