#include "main.h"
/**
 * _isalpha - checks if value is a letter
 * @c: parametre to be back
 * Return: 1 if value letter otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
