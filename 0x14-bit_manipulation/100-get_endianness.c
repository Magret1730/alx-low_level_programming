#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int value = 1;
	unsigned char *pointer = (unsigned char *)&value;

	if (*pointer == 1)
		return (1); /*little royal highness*/
	else
		return (0); /*big royal highness*/
}
