#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */
char *leet(char *s)
{
	int i, h;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (h = 0; h <= 9; h++)
		{
			if (a[h] == s[i])
				s[i] = b[h];
		}
	}
	return (s);
}
