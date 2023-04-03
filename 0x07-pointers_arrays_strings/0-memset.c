#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer
 * @b: contant byte
 * @n: integer
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		s[z] = b;
	}
	return (s);
}
