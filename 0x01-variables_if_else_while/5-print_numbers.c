#include <stdio.h>

/**
 * main - single digit number
 *
 * Description: It prints all single digit
 * numbers of base 10 starting from 0,
 * followed by a new line
 * stdio.h: printf
 * Return: 0 meaning sucess
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		printf("%d", digit);
	}
	putchar('\n');

	return (0);
}
