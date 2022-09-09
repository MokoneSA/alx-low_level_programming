#include <stdio.h>
#include <ctype.h>
/* header goes here */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* main code goes here */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
		{
			continue;
		}
		putchar(x);
	}
	putchar('\n');
	return (0);
}
