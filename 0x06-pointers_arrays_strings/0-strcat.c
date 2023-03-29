#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string
 * @src: string
 * Retrun: pointer to resulting string (dest)
 */
char *_strcat(char *dest, char *src)
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
