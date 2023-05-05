#include "main.h"

/**
 * cap_string - capitalizes strings
 * @str: receives a string
 *
 * Description: Write a function that capitalizes all
 * words of a string.Separators of words: space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }.
 * Return: first character
 */

char *cap_string(char *str)
{
	/**
	 * j = n;
	while (n != '\0')
	{
		i++;
	}
	while (n[i + 0] != '\0')
	{
		if (n[i + 0] >= 'a' && n[i + 0] <= 'z')
		{
			n[i + 0] = n[i + 0] - 32;
		}
	}
	return (n[i + 0]);
	*/

	int i;
	int j;

	char sep[] = " \t\n,;.!?\"(){}";

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}

	for (i = 1; str[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i - 1] == sep[j] && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
				break;
			}
		}
	}
	return (str);
}
