#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 * Description: prints the binary representation of a number
 * You are not allowed to use arrays
 * You are not allowed to use malloc
 * You are not allowed to use the % or / operators
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int m;
	int z;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	m = 1UL << (sizeof(unsigned long int) * 8 - 1);
	z = 1;
	while (m > 0)
	{
		if ((n & m) != 0)
		{
			z = 0;
			_putchar('1');
		}
		else if (z == 0)
			_putchar('0');
		m = m >> 1;
	}
}

