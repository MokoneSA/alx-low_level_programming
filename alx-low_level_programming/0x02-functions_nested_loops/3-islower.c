#include "main.h"

/**
 * _islower - Entry point
 * Description: if a character is l in a lower case
 * @c: character to be verified
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
