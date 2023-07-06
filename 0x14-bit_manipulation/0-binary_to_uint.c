#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: type const char pointer of one bit
 * Return: converted number, or 0 if one or more char
 * in str b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	unsigned int d = 0;

	if (b == NULL)
		return (0);
	while (*(b + x) != '\0')
	{
		if (*(b + x) != '0' && *(b + x) != '1')
			return (0);
		d <<= 1;
		if (*(b + x) == '1')
			d ^= 1;
		x++;
	}
	return (d);
}
