#include <stdio.h>

/**
* is_palindrome - palindrome
* @num: number to find
* Return: num
*/
int is_palindrome(int num)
{
	int rev = 0, original = num;
	while (num > 0)
	{
		rev = rev * 10 + num % 10;
		num = num /  10;
	}
	return (original == rev);
}

/**
* find_largest_palindrome - find largest palindrome
* Return: largest palindrome
*/
int find_largest_palindrome()
{
	int larg_palindrome = 0, product, num1, num2;
	for (num1 = 999; num1 >= 100; num1--)
	{
		for (num2 = num1; num2 >= 100; num2--)
		{
			product = num1 * num2;
			if (product > larg_palindrome && is_palindrome(product))
				larg_palindrome = product;
		}
	}
	return (larg_palindrome);
}

/**
* main - entry point and creating the file
* Return: 0, success
*/
int main()
{
	int result = find_largest_palindrome();
	FILE *file = fopen("102-result", "w");
	if (file != NULL)
	{
		fprintf(file, "%d", result);
		fclose(file);
	}
	return (0);
}
