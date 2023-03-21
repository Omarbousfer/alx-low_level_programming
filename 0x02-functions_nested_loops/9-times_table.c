#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: 0 (Success)
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int value = i * j;

			if (value < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(value + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(value / 10 + '0');
				_putchar(value % 10 + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
