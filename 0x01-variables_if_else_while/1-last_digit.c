#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - void
 *
 * Description:
 * stdlib.h: contains functions of memory allocation and process control
 * time.h: time
 * math.h: %
 * stdio.h: printf
 * Return: zero i.e success
 */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		last = (n % 10) * -1;
	}
	else
	{
	last = n % 10;
	}
		if (last >= 5)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
		}
		else if (last == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, last);
		}
		else
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, last);
		}
	return (0);
}
