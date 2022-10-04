#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 *
 * Returns: 0.
 */

void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; ++index)

	for (--index; index >= 0; --index)
	_putchar(s[index]);

	_putchar('\n');
}



void print_rev(char *);

/**
 * main - check the code for Holberton School students.
 * 
 * Return: Always 0.
 */
int main(void)
{
	char *str;

	str = "Holberton!";
	print_rev(str);
	return (0);
}
