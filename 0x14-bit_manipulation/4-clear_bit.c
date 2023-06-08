#include "main.h"
/**
 * clear_bit - sets the value of a bit to 1 at a given index
 * @n: the number
 * @index:  is the index, starting from 0 of the bit you want to get
 * Description: function that returns the value of a bit at a given index
 * Return: 1 if it worked
 *		-1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	m = 1UL << index;
	m = ~m;
	*n = *n & m;

	return (1);
}
