#include "main.h"
#include <stdio.h>
/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack
 *
 * @haystack: string
 * @needle: sub string
 * Return: haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *all = haystack;
		char *ptt = needle;

		while (*ptt == *haystack && *ptt != '\0' && *haystack != '\0')
		{
			haystack++;
			ptt++;
		}
		if (*ptt == '\0')
			return (all);
		haystack = all + 1;
	}
	return (NULL);
}
