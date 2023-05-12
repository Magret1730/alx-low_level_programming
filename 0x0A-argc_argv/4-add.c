#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers
 * @argc: counts
 * @argv: string
 * Description: program that adds positive numbers.Print the result,
 * followed by a new line.If no number is passed to the program, print 0,
 * followed by a new line.If one of the number contains symbols that are
 * not digits, print Error, followed by a new line, and return 1.You can
 * assume that numbers and the addition of all the numbers can be stored
 * in an int.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	/**
	 * int i, add = 0;
	if (argc > 1){
		for (i = 1; i < argc; i++){
			if (isdigit(*argv[i]))
				add += atoi(argv[i]);
			else
				printf("Error\n");
				return (1);
		}
		printf("%d\n", add);
	}
	else
		printf("0\n");
	return (0);
	*/
	int add = 0;
	int i, j;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
