#include "variadic_functions.h"
/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: number of arguments
 * @...: the numbers
 * Return: sum result
 */
int sum_them_all(const unsigned int n, ...)
{
	int result;
	unsigned int i;
	va_list valist;

	if (!n)
		return (0);
	va_start(valist, n);

	result = i = 0;
	while (i < n)
	{
		result = result + va_arg(valist, int);
		i++;
	}
	va_end(valist);
	return (result);

}
