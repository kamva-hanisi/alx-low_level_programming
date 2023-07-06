#include "main.h"
/**
 * _higher - calculate higher and lower
 * @lower: lower of the exponet
 * @higher: higher of the exponet
 * Return: value of lower and higher
 */
unsigned long int _higher(unsigned int lower, unsigned int higher)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= higher; i++)
		num *= lower;
	return (num);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag;

	flag = 0;
	dev = _higher(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
