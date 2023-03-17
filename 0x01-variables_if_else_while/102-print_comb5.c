#include <stdio.h>
/**
 * main - main function
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int h;

	for (i = 0 ; i < 100; i++)
	{
		for (h = i + 1 ; h < 100 ; h++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((h / 10) + '0');
			putchar((h % 10) + '0');
			if (i != 98 || h != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
