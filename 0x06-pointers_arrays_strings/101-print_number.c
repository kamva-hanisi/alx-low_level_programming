#include "main.h"

/**
  * print_number - Prints any integer with putchar
  * @n: Number to prints
  *
  * Return: Nothing
  */
void print_number(int n)
{
	unsigned int z;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	z = n;

	if (z / 10)
		print_number(z / 10);

	_putchar(z % 10 + '0');
}
