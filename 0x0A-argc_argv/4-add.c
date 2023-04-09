#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: arguments count
 * @argv: arguments values
 * Return: 0 if no number passed, 1 if it's not digits
 */
int main(int argc, char *argv[])
{
	int i, j, r;

	(void)argv;
	r = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			r += atoi(argv[i]);
		}
	}
	printf("%d\n", r);
	return (0);
}
