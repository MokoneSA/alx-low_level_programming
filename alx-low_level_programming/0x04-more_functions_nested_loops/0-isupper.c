#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if c is uppercase
 * @c: parameter
 * Return: nothing
 */
int _isupper(int c)
{
		if ((c >= 'A') && (c <= 'Z'))
		return (1);

		return (0);
}
