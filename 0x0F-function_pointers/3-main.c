#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - program that performs simple operations
 * @argc: argument count
 * @argv: array of argument
 * Description: program that performs simple operations
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
