#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: 0 (Success)
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 10; i++)
		_putchar(9 * i + '0');
}
