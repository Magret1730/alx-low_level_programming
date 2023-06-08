#include "main.h"

/**
 * flip_bits - returns the number of bits
 * @n: value
 * @m: another value
 *
 * Description: returns the number of bits
 * you would need to flip to get from one number to another
 * You are not allowed to use the % or / operators
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count;

	result = n ^m;
	count = 0;

	while (result != 0)
	{
		if ((result & 1) == 1)
			count++;

		result >>= 1;
	}

	return (count);
}

