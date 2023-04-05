#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s > '\0')
	{
		c += _strlen_recursion(s + 1) + 1;
	}
	return (c);
}
