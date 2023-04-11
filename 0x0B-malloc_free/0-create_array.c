#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: in bytes
 * @c: charachter
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
		return (0);

	a = malloc(size * sizeof(*a));
	if (a == 0)
		return (0);

	for (b = 0; b < size; b++)
		a[b] = c;
	return (a);
}
