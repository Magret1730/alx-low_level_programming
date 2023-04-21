#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**main - it is void
 *
 * Description - This program will assign a random number
 * to the variable n each time it is executed and
 * print whether the number stored in the
 * variable n is positive or negative
 * stdio.h: contains input and output function - printf
 * stdlib.h: contains function of memory allocation
 * time.h: contains function for working
 * with time and date - time
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf ("%d is positive\n");
	}
	else if (n == 0)
	{
		printf ("%d is zero\n");
	}
	else
	{
		printf ("%d is negative\n");
	}

	return (0);
}
