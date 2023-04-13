#include "main.h"
/**
 * _strlen - get the length of a string
 * @s: pointer
 * Return: 0
 */
int _strlen(char *s)
{
	unsigned int c;

	for (c = 0; s[c] != 0; c++)
	{
	}
	return (c);

}
/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n:
 * Return: if fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int  len, x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = (unsigned int)_strlen(s1);
	p = malloc((len + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (x = 0, y = 0; x < (len + n); x++)
	{
		if (x < len)
			*(p + x) = *(s1 + x);
		else
		{
			*(p + x) = *(s2 + y);
			y++;
		}
	}
	*(p + x) = '\0';

	return (p);
}
