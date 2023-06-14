#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: The final string. NULL on error,
 */
char *str_concat(char *s1, char *s2)
{
	char *fin, *ptr1, *ptr2;
	int len1 = 0, len2 = 0;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	} 
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}
	if (len1 == 0 && len2 == 0)
	{
		fin = (char *)malloc(sizeof(char));
		if (fin == NULL)
			return (NULL);
		*fin = '\0';
		return (fin);
	}
	else if (len1 == 0 && len2 > 0)
	{
		fin = (char *)malloc((len2 + 1) * sizeof(char));
		ptr2 = fin;

		while (*s2 != '\0')
		{
			*ptr2 = *s2;
			ptr2++;
			s2++;
		}
		*ptr2 = '\0';

		return (fin);
	}
	else if (len1 > 0 && len2 == 0)
	{
		fin = (char *)malloc((len1 + 1) * sizeof(char));
		if (fin == NULL)
			return (NULL);
		ptr1 = fin;

		while (*s1 != '\0')
		{
			*ptr1 = *s1;
			ptr1++;
			s1++;
		}
		*ptr1 = '\0';

		return (fin);
	}
	fin = (char *)malloc(((len1 + len2) + 2) * sizeof(char));
	if (fin == NULL)
		return (NULL);

	ptr1 = fin;

	while (*s1 != '\0')
	{
		*ptr1 = *s1;
		ptr1++;
		s1++;
	}
	if ((*(ptr1 - 1)) != ' ' && *s2 != ' ')
	{
		*ptr1 = ' ';
		ptr1++;
	}
	ptr2 = s2;

	while (*ptr2 != '\0')
	{
		*ptr1 = *ptr2;
		ptr1++;
		ptr2++;
	}
	*ptr1 = '\0';

	return (fin);
}	
