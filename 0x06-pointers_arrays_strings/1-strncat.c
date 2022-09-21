#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: string to be appended on
 * @src: string to be concatenated upon
 * @n: fixes the buffer overrun problem
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n);
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	       dest[i] = src[i];
	dest[i] = '\0';

	return(dest);
}
