#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: input integer
 * Description: not allowed arrays, long or pointers
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num
	}
	else if ((num / 10) > 0)
		_putchar(num / 10);
	_putchar((num % 10) + 48);
}
