#include "variadic_functions.h"

/**
 * sum_them_all - add all the numbers
 *
 * @n: sum of parameters passed to the function
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;

	unsigned int i;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
