#include "main.h"
#include <ctype.h>

/**
 * _islower - convect to lowercase
 * Return: 0
 */
int _islower(int c)
{
	if (islower(c) == 0)
	{
		return (0);
	}

	if (islower(c) > 0)
	{
		return (1);
	}

	return (0);
}
