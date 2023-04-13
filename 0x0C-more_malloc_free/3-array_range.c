#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: integer of minimum
 * @max: integer of maximum
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		*(p + i) = min;

	return (p);
}
