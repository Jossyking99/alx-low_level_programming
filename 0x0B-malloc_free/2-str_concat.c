#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int len, len1, len2, i, j;
	char *conStr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	len = len1 + len2;
	conStr = malloc(sizeof(char) * (len + 1));

	if (conStr == NULL)
	{
		free(conStr);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		conStr[i] = s1[i];

       	j = len2;
	for (len2 = 0; len2 <= j; i++, len2++)
		conStr[i] = s2[len2];
	return (conStr);
       
