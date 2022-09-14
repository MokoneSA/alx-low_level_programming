#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints alphabets in small letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar (10);
	return (0);
}
