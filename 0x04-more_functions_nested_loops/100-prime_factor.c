#include <stdio.h>
#include <math.h>
/**
 * main -  finds and prints the largest prime
 * factor of the number 612852475143
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	long p, lpf;
	long num;

	num = 612852475143;
	for (p = 2; p < sqrt(num); p++)
	{
		if ((num % p) == 0)
		{
			lpf = p;
			num = num / p;
			p = 1;
		}
	}
	lpf = num;
	printf("%ld\n", lpf);

	return (0);
}
