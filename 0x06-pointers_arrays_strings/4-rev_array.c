#include "main.h"
/**
 * reverse_array - reverse the content of an array of int
 * @a: integer
 * @n: integer
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int x;
	int flag;

	x = 0;
	n = n - 1;
	while (x < n)
	{
		flag = a[x];
		a[x] = a[n];
		a[n] = flag;
		x++;
		n--;
	}
}
