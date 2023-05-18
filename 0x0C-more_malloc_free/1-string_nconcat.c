#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat -  function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes
 * Description:  function that concatenates two strings.The
 * returned pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null
 * terminated.If the function fails, it should return NULL.If n is
 * greater or equal to the length of s2 then use the entire string s2.
 * if NULL is passed, treat it as an empty string.
 * Return: p
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *p;

	unsigned int len_s1 = 0;
	unsigned int len_s2 = 0;
	unsigned int len_total = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n >= len_s2)
		len_total = len_s1 + len_s2;
	else
		len_total = len_s1 + n;

	p = malloc(len_total + 1);

	if (p == NULL)
		return (p);

	strncpy(p, s1, len_s1);
	strncpy(p + len_s1, s2, len_total - len_s1);

	p[len_total] = '\0';

	return (p);

}
