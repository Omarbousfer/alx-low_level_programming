#include "main.h"
/**
 * _islower - function checks if alphabet is lowercase
 * @c: parametre to be printed
 * Return: 1 if it's true otherwise false
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
