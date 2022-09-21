#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest - string to be appended on
 * @src - string to be concatenated upon
 *
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n);
{
	char dest[15] = "Hello ";
	char src[10] = "World!\n";
	int n = dest + src;

	_putchar(n);

	return(dest);
}
