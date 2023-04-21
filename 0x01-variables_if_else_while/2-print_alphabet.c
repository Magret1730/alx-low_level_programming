#include <stdio.h>

/**
 * main - it is void
 *
 * Description: Prints lowercase alphabets
 * followed by a new line
 * stdio.h: putchar
 * Return: 0 which means success
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}

	putchar('\n');

	return (0);
}
