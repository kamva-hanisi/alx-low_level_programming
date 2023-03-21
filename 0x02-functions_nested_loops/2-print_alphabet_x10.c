#include "main.h"

/**
 * main - print alphabet_x10
 * long print description
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		count++;
	}
}
