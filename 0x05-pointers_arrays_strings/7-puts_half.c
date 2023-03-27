#include "main.h"
#include <stdio.h>
/**
 * puts_half -  prints half of a string
 * @str: pointer parameter
 * Return: 0
 */
void puts_half(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		n++;
	}
	for (n /= 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
