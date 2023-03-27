#include "main.h"
/**
 * swap_int -  swaps the values of two integers
 * @a: pointer parameter 1
 * b@: pointer parameter 2
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int value;

	value = *a;
	*a = *b;
	*b = value;
}
