#include "main.h"
/**
 * _isdigit - checks for digits
 * @c: takes in integer
 *
 * Description: function that checks for digit 0 -9
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
