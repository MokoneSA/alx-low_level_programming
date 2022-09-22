#include "main.h"

/**
 * _strcmp - compares two strings
 * @S1: first string
 * @s2: second string
 * Returns:
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return(0);
}
