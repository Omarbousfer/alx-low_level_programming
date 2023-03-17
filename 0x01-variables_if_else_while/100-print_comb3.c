#include <stdio.h>
/**
 * main - main function
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int h;

	for (i = 0 ; i < 10 ; i++)
	{
		for (h = 1 ; h < 10 ; h++)
		{
			if (i < h && i != h)
			{
				putchar(i + '0');
				putchar(h + '0');
				if (i + h != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
