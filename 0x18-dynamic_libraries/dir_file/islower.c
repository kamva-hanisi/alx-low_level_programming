#include "main.h"

/**
* _islower - Entry pointer
* Description - Checks if a character is a lower case
* @c: integer value it receive
* Return: 1 if T , 0 if F
*/
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
	
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
