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
	int largest;
	int i;
	long int n;

	n = 612852475143;

	while (n % 2 == 0)
	{
		n = n / 2;
		printf("factor is 2 \n");
		printf("n is now %ld \n", n);
		if (largest < 2)
		{
			largest = 2;
		}
	}
	for (i = 3; i*i <= n; i += 2)
	{
		while (n % i == 0)
                {
			n = n / i;
			largest = i;
		}

	}

	printf("%d\n", num);
	return 0;
}
