#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 * @size: the size of the square
 * Return: 0 always
 */
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
