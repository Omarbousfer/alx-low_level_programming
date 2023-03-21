#include <stdio.h>
/**
 * main - prints values that do not exceed 4,000,000,
 * Return: 0
 */
int main(void)
{
	int f1 = 1;
	int f2 = 2;
	int f3 = 0;
	int f0;

	while (f2 < 4000000)
	{
		if (f2 % 2 == 0)
		{
			f3 += f2;
		}

		f0 = f2;
		f2 += f1;
		f1 = f0;
	}
	printf("%d\n", f3);
	return (0);
}
