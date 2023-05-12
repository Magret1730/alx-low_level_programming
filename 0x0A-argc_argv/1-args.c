#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: counts
 * @argv: strings
 *
 * Description: program that prints the number of arguments passed into it.
 * Your program should print a number, followed by a new line
 * Return: 0 meaning sucess
 */

int main(int argc, char *argv[])
{
	int i = 0;

	(void)argc;

	/**
	 * if (argc > 1)

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i);
	}
	*/

	/**
	 * while (i < argc)
	*/
	while (argv[i] != NULL)
	{
		i++;
	}
	printf("%d\n", i - 1);

	return (0);
}
