#include "main.h"
#include <ctype.h>

/**
 * _isalpha - convect to uppercase
 * @c: checked the letters 
 * Return: 0
 */
int _isalpha(int c)
{
	if (isalpha(c) > 0 )
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
