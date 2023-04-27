#include <stdio.h>
/**
 * main - prints number 1 - 100
 *
 * Description: Program that prints number 1 to 100
 * followed by new line but prints Fizz for multiples
 * of 3 and Buzz for multiples of 5 and FizzBuzz for
 * multiples of 3 and 5. Each number is separated by
 * space and standard library is used.
 * Return: 0 always success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
