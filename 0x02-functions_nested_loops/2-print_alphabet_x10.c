#include "main.h"

/**
 * main -Entry point
 *
 * function that prints 10 times the alphabet,
 * in lowercase. and creates a new line.
 *
 * Return: Always 0(Success)
 */
void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; line++)
	{

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
