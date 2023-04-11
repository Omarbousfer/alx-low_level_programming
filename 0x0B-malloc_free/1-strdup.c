#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int x, y;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		;

	p = malloc(x * sizeof(*p) + 1);
	if (p == NULL)
		return (NULL);

	for (y = 0; y < x; y++)
		p[y] = str[y];
	p[y] = '\0';

	return (p);
}
