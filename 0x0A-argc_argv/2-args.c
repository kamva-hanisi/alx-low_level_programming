#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)

{
	int f;

	for (f = 0; f < argc; f++)
		printf("%s\n", argv[f]);

	return (0);
}
