#include <stdio.h>
#include <ctype.h>
/* more headers go there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* Betty style for function main goes there*/
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	putchar('\n');
	return (0);
}
