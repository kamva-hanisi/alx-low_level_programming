#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: the longer string to search
 * @needle: the first occurrence of the substring
 *
 * Return: a pointer beg of substring or @Null if it not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int w = 0, q = 0;

	while (haystack[w])
	{
		while (needle[q] && (haystack[w] == needle[0]))
		{
			if (haystack[w + q] == needle[q])
				q++;
			else
				break;
		}
		if (needle[q])
		{
			w++;
			q = 0;
		}
		else
			return (haystack + w);
	}
	return (0);
}
