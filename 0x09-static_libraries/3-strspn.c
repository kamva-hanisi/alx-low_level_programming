#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the initial segment of
 * @accept: which consist only of bytes from
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int p = 0, z, y;

	for (z = 0; s[z] != '\0'; z++)
	{
		if (s[z] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[z] == accept[y])
					p++;
			}
		}
		else
			return (p);
	}
		return (p);

}
