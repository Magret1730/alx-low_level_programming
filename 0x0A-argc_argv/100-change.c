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
	int cents;
	int count = 0;
	int amount[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		count = count + cents / amount[i];
		cents = cents % amount[i];
	}

	printf("%d\n", count);

	return (0);
}
