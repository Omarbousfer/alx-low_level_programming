#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 * @size: the size of the square
 * Return: 0 always
 */
void print_square(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}
