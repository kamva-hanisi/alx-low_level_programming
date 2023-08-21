#include "main.h"

/**
* _memset - fills memory with a byte
* @s: pointer to put the byte
* @b: constant
* @n: max bytes to use
* Return: s or b
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
