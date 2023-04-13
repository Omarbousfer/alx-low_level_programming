#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: integer
 * @size: integer
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = NULL;
	char *s;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (p);

	p = malloc(nmemb * size);
	if (p == 0)
		return (NULL);
	s = (char *)p;
	for (i = 0; i < (nmemb * size); i++)
		*(s + i) = 0;

	return (s);
}
