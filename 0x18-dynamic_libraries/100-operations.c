/**
 * add - addition function
 * @a: first value
 * @b: second value
 * Return: added values
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtraction function
 * @a: first value
 * @b: second value
 * Return: subtracted values
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplication function
 * @a: first value
 * @b: second value
 * Return: multiplied values
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - division function
 * @a: first value
 * @b: second value
 * Return: divided values
 */
int div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

/**
 * mod - modulos function
 * @a: first value
 * @b: second value
 * Return: modulo values
 */
int mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
