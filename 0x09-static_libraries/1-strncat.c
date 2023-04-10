#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, h;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (h = 0; src[h] != '\0' && h < n; h++)
	{
		dest[i + h] = src[h];
	}
	dest[i + h] = '\0';
	return (dest);
}
