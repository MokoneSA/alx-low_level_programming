#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		int abc;

		for (abc = 'z'; abc >= 'a'; abc--)
		{
			putchar(abc);
		}
		putchar('\n');
		return (0);
}
