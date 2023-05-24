#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - addition function
 * @a: first argument
 * @b: second argument
 * Description: function that add two numbers
 * Return: the addition of the arguments
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction function
 * @a: first argument
 * @b: second argument
 * Description: function that subtracts two numbers
 * Return: the subtraction of the arguments
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication function
 * @a: first argument
 * @b: second argument
 * Description: function that multiplies two numbers
 * Return: the multiplication of the arguments
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 * @a: first argument
 * @b: second argument
 * Description: function that divides two numbers
 * Return: the division of the arguments
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}

/**
 * op_mod - modulo function
 * @a: first argument
 * @b: second argument
 * Description: function that finds the modulos of  two numbers
 * Return: the modulo of the arguments
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a % b);
}

