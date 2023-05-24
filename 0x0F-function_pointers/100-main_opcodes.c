#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: count
 * @argv: argument
 * Description: program that prints the opcodes of its own main function
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int nb, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nb = atoi(argv[1]);

	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned char *p = (unsigned char *)main;

	for (i = 0; i < nb; i++)
	{
		printf("%02x ", p[i]);
	}
	printf("\n");

	return (0);
}
