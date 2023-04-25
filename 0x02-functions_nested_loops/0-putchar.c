#include <unistd.h>
#include "main.h"

/**
 * main - it is void
 *
 * Description: prints out _putchar
 * Return: 0
 */

int main(void)
{
	char *words = "_putchar";
	int a;

	for (a = 0; words[a] != '\0'; a++)
	{
		_putchar(words[a]);
	}

	_putchar('\n');

	return (0);
}
