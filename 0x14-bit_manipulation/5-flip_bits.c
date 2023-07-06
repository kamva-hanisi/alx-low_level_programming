#include "main.h"

/**
 * flip_bits - flip to get from one number to another
 *
 * @n: the first number
 *
 * @m: the second number
 *
 * Return: num of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int k, i;

	k = 0;

	result = 1;

	differnce = n ^ m;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (differnce & result))
			k++;
		result <<= 1;
	}

	return (k);
}
