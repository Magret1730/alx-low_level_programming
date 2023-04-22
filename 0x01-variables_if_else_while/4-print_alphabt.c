#include <stdio.h>

/**
 * main - Alphabets
 *
 * Description: Prints alphabets in lower cases
 * except q and e
 * stdio.h: putchar
 * Return: 0 meaning sucess
 */

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower == 'e' || lower == 'q')
		{
			continue;
		}
	putchar(lower);
	}

	putchar('\n');

	return (0);
}
