#include <stdio.h>

/**
 * main - prints prime factor
 *
 * Description: program that prints prime factor
 * of the number 612852475143 followed by a new
 * line
 * Return: void
 */

int main(void)
{
	long int largest;
	long int i;
	long int n, calc_n;

	calc_n = 612852475143;
	n = calc_n;

	while (n % 2 == 0)
	{
		n = n / 2;
		if (largest < 2)
		{
			largest = 2;
		}
	}
	for (i = 3; i < n; i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n = n / i;
		}

	}

	if (n > 2)
	{
		printf("%ld \n", n);
	}

	return (0);
}
