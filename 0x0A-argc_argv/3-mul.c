#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of two numbers
 * @argc: count
 * @argv: string
 *
 * Description: program that multiplies two numbers. Your program should
 * print the result of the multiplication, followed by a new line
 * You can assume that the two numbers and result of the multiplication
 * can be stored in an integer. If the program does not receive two arguments,
 * your program should print Error, followed by a new line, and return 1.
 * Return: 1
 */

int main(int argc, char **argv)
{
	int mul;
	int j, k;

	if (argc == 3)
	{
		j = atoi(argv[1]);
		k = atoi(argv[2]);

		mul = j * k;

		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
