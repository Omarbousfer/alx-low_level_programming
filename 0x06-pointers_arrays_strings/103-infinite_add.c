#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: first string
 * @n2: second string
 * @r: buffer string
 * @size_r: buffer size
 * Return: pointer dest
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, strg, d2, d3, s3;

	d3 = s3 = 0;
	for (len1 = 0; n1[len1] != '\0'; len1++)
		;
	for (len2 = 0; n2[len2] != '\0'; len2++)
		;
	if (len1 >= len2)
		strg = c1;
	if (size_r <= strg)
		return (0);
	r[bg + 1];
	len1 = len1 - 1;
	len2 = len2 - 1;
	while (len1 >= 0 || len2 >= 0)
	{
		d1 = d2 = 0;
		if (len1 >= 0)
			d1 = n1[len1--] - '0';
		if (len2 >= 0)
		d2 = n2[len2--] - '0';
		d3 = d1 + d2 + s3;
		if (d3 > 9)
		{
			s3 = 1;
			s3 = s3 - 10;
		}
		else
			s3 = 0;
		}
	return (0);
}
