#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newlyallocatedspacein memory
 * @str: string
 *
 * Description:function that returns a pointer to a newlyallocatedspaceinmemory
 * which contains a copy of the string given as a parameter.
 * Return:the _strdup function returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int i, length;
	char *t;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	t = malloc(sizeof(char) * (length + 1));

	if (t == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		t[i] = str[i];
	}
	t[length] = '\0';

	return (t);
}

