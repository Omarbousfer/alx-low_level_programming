#include "main.h"
/**
 * flip_bits - Returns the number of bits  needed to be flipped
 * @n: type unsigned long int input pointer
 * @m: type unsigned long int position of unit
 * Return: flipped_bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int o;
	unsigned int flip_bit;

	o = n ^ m;
	flip_bit = 0;
	while (o > 0)
	{
		if ((o & 1) != 0)
			flip_bit++;
		o = o >> 1;
	}
	return (flip_bit);
}
