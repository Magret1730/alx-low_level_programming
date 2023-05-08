#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: takes a pointer
 * b: takes a string
 * @n: takes number of bytes
 *
 * Description: function that fills memory with a constant byte.
 * The _memset() function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b.
 * returns a pointer to the memory area s
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * unsigned int i;
	i = 0;

	while (b != '\0')
	{
		if (i < sizeof(b) * n)
		{
			b++;
			return (s);
		}
	}

	i++;
	*/

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
