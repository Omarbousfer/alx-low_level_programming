#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: struct pointer dog
 * NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *poppy;
	char *a, *b;
	int i, j, h;

	poppy = malloc(sizeof(struct dog));
	if (poppy == NULL)
		return (NULL);

	for (i = 0; *(name + i) != '\0'; i++)
		;
	for (j = 0; *(owner + j) != '\0'; j++)
		;
	a = malloc(sizeof(char) * i + 1);
	if (a == NULL)
	{
		free(poppy);
		return (NULL);
	}
	b = malloc(sizeof(char) * j + 1);
	if (b == NULL)
	{
		free(a);
		free(poppy);
		return (NULL);
	}
	for (h = 0; h <= i; h++)
		*(a + h) = *(name + h);
	for (h = 0; h <= j; h++)
		*(b + h) = *(owner + h);

	poppy->name = a;
	poppy->age = age;
	poppy->owner = b;

	return (poppy);
}
