#include <stdio.h>

/**
 * main - prints name of file
 * @argc: counts
 * @argv[]: strings
 *
 * Description: program that prints its name, followed by a new line.
 * If you rename the program, it will print the new name, without
 * having to compile it again.ou should not remove the path before the
 * name of the program.
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
