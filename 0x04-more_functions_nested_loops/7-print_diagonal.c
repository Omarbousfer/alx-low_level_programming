#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * Return: 0 always
 */
void print_diagonal(int n)
{
	int j, i;

	i = 0;

	while (n > 0)
	{
		j = i;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
		n--;
	}
	if (i < 1)
		_putchar('\n');
}
