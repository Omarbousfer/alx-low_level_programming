#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer
 * @src: memory area
 * @n: bytes from src to dest
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		dest[z] = src[z];
	}

	return (dest);
}
