#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @a: parametre to be back
 * Return: -a if it's negative
 * a if it's positif
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
