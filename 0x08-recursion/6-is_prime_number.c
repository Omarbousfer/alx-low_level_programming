#include "main.h"
/**
 * prime - test if numbers less can be devided by
 * @x: integer
 * @y: integer
 * Return: 1 or 0
 */
int prime(int x, int y)
{
	if (y >= x && x > 1)
		return (1);
	else if (x % y == 0 || x <= 1)
		return (0);
	else
		return (prime(x, y + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: integer
 * Return: 1 if the input integer otherwise 0
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
