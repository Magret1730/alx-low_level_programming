#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main -passwords
 *
 * Description: program that generates valid random
 * password for the program 101-crackme
 * Return: void
 */

int main(void)
{
	int i, n;
	char password[7];

	srand(time(NULL));
	for (i = 0; i < 6; i++)
	{
		n = rand() % 62;
		if (n < 26)
		{
			password[i] = 'a' + n;
		}
		else if (n < 52)
		{
			password[i] = 'A' + n - 26;
		}
		else
		{
			password[i] = '0' + n - 52;
		}
	}
	password[6] = '\0';

	printf("%s\n", password);

	return (0);
}
