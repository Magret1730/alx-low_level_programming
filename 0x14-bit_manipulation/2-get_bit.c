#include "main.h"
/**
 * get_bit - prints the binary representation of a number
 * @n: the number
 * @index:  is the index, starting from 0 of the bit you want to get
 * Description: function that returns the value of a bit at a given index
 * Return: value of a bit at a given index
 *		-1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	m = 1UL << index;

	if ((n & m) != 0)
		return (1);
	else
		return (0);
}

