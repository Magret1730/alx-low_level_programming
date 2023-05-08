#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: gets a string
 * @accept: gets a string
 *
 * Description: function that gets the length of a prefix substring
 * Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int length;

	length = 0;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				length++;
				break;
			}
		}

		if (accept[i] == '\0')
		{
			break;
		}

		s++;
	}

	return (length);
}
