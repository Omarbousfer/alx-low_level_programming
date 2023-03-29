#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: type char str
 * @src: type char str
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	c = 0;
	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';
	return (dest);
}
