#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n:  number of strings passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	char *s;
	int i;

	if (n < 1)
	{
		printf("\n");
		return;
	}
	va_start(valist, n);
	i = 0;

	while (i < (int) n)
	{
		s = va_arg(valist, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator != NULL && i != (int) n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(valist);
}
