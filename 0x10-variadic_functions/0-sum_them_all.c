#include <variadic_functions.h>
/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: number of arguments
 * @...: the numbers
 * Return: sum result
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0, i = n;
	va_list valist;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int);
	va_end(ap);
	return (result);
}
