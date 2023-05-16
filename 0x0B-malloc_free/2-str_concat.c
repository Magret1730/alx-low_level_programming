#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Description: function that concatenates two strings
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, len1, len2;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL && s2 != NULL)
	{
		len1 = 0;
		len2 = strlen(s2);
	}
	else if (s1 != NULL && s2 == NULL)
	{
		len1 = strlen(s1);
		len2 = 0;
	}
	else if (s1 != NULL && s2 != NULL)
	{
		len1 = strlen(s1);
		len2 = strlen(s2);
	}
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[len1 + len2] = '\0';
	return (concat);
}
