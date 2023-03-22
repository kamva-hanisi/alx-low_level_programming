#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - checking if given number is positive, negative or 0
 * @i: number to be checked
 * Return: nothing success
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
