#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: int or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *str = NULL;
	unsigned int len;
	unsigned int i, j, h, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	len = i + j + 1;
	str = malloc(len * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (h = 0; h < i; h++)
	{
		str[h] = s1[h];
	}
	for (k = 0; k < j; h++, k++)
	{
		str[h] = s2[k];
	}
	str[len] = s2[k];
	return (str);
}
