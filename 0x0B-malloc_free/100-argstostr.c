#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: The argument count
 * @av: Array of arguments
 *
 * Description: This function concatenates all the arguments of a program,
 * with each argument followed by a newline character ('\n') in the new string.
 *
 * Return: A pointer to the new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int total_length = 0, current_length = 0;
	char *concat;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		current_length = strlen(av[i]);
		total_length += current_length;
	}

	total_length += ac - 1;

	concat = malloc(sizeof(char) * (total_length + 1));
	if (concat == NULL)
	{
		return (NULL);
	}

	current_length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat[current_length++] = av[i][j];
		}

		if (i != ac - 1)
		{
			concat[current_length++] = '\n';
		}
	}
	concat[current_length] = '\0';

	return (concat);
}

