#include "main.h"
/**
 * rev_string -  reverses a string
 * @s: pointer parameter
 * Return: 0
 */
void rev_string(char *s)
{
	int l, i;
	char value;

	for (l = 0; s[1] != '\0'; ++l)
		;
	for (i = 0; i < 1 / 2; i++)
	{
		value = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = value;
	}
}
