#include <stdio.h>
/**
 * main - main function
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int h;
	int j;

	for (i = 0; i < 10 ; i++)
	{
		for (h = 1 ; h < 10 ; h++)
		{
			for (j = 2 ; j < 10 ; j++)
			{
				if (i < h && h < j)
				{
					putchar(i + '0');
					putchar(h + '0');
					putchar(j + '0');
					if (i + h + j != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
