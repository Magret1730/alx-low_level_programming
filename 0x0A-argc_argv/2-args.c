#include <stdio.h>

/**
 * main - prints arguments it recieves
 * @argc: count argument
 * @argv: string argument
 *
 * Description: program that prints all arguments it receives.
 * All arguments should be printed, including the first one
 * All arguments should be printed, including the first one
 * Return: 0 meaning sucess
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
