#include "lists.h"

/**
 * main - to check code
 *
 * Return: 0
 */

int main(void)
{
	char format[] = "Hello, Holberton\n";

	write(1, format, sizeof(format) - 1);
	return (0);
}
