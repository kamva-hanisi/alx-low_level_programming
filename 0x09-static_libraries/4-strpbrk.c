#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: first occurrence in the string
 * @accept: matches one of the bytes, or @NULL if no such byte
 *
 * Return: the pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int r;
		while (*s)
		{
			for (r = 0; accept[r]; r++)
			{
				if (*s == accept[r])
					return (s);
			}
			s++;
		}
	return (NULL);
}
