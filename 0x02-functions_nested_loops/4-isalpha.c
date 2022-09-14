#include "main.h"

/**
 * _isalpha - Entry point
 * @c: the integer value it received
 * Description: Checks if alphabet
 * Return: 1 if true, 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))

	return (1);

	return (0);
}
