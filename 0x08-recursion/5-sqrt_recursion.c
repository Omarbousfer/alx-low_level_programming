#include "main.h"
/**
 * sqr - return square of number
 * @x: integer
 * @y: integer
 * Return: square
 */
int sqr(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y < x)
		return (sqr(x, y + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
