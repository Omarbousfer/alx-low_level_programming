#include "main.h"
/**
 * string_toupper - reverse the content of an array of int
 * @a: integer
 * Return: a
 */
char *string_toupper(char *a)
{
	int x;

	for (x = 0; a[x] != '\0'; x++)
	{
		if (a[x] > 96 && a[x] < 123)
		{
			a[x] -= 32;
		}
	}
	return (a);
}
