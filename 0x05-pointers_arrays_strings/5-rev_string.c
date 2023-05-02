#include "main.h"

/**
 * rev_string - reverses string
 * @s: receives a string
 *
 * Description: a function that reverses a string
 * Return: reverse of a string
 */

void rev_string(char *s)
{
	int i;
	int j;
	int length;
	char rev;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		rev = s[i];
		s[i] = s[j];
		s[j] = rev;
	}

}
