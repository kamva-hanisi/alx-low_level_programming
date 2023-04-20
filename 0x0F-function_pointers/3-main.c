#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - ...
  * @argc: ...
  * @argv: ...
  *
  * Return: ...
  */
int main(int _attribute_((_unused_)) argc, char *argv[])
{
	int num3, num4;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num3 = atoi(argv[1]);
	op = argv[2];
	num4 = atoi(argv[3];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num3, num4));

	return (0);
}
