#include <stdio.h>
/**
 * main - print 50 fibonacci numbers
 *
 * Return: (0)
 */
int main(void)
{
	long fb1, fb2, r, i;

	fb1 = 0;
	fb2 = 1;
	for (i = 0; i < 50; i++)
	{
		r = fb1 + fb2;
		fb1 = fb2;
		fb2 = r;
		if (i != 49)
			printf("%ld, ", r);
		else
			printf("%ld\n", r);
	}
	return (0);
}
