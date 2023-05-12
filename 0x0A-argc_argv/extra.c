#include <stdio.h>
#include <stdlib.h>
/**
 * main - minimum number of coins
 * @argc: counts
 * @argv: string
 * Description: program that prints the minimum number of coins to make change
 * for an amount of money.
 * Return: 1 for != 1, 0 for > 0 and 0 for the main
 */
int main(int argc, char *argv[])
{
	int amount, cent = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
	}
	else
	{
		if (amount >= 25)
		{
			cent = cent + (amount / 25);
			amount %= 25;
		}
		if (amount >= 10)
		{
			cent = cent + (amount / 10);
			amount %= 10;
		}
		if (amount >= 5)
		{
			cent = cent + (amount / 25);
			amount %= 25;
		}
		if (amount >= 2)
		{
			cent = cent + (amount / 25);
			amount %= 25;
		}
		if (amount == 1)
		{
			cent = cent + 1;
		}
		printf("%d\n", cent);
	}
	return (0);
}
