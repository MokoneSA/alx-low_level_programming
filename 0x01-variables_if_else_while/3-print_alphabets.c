#include <stdio.h>
#include <ctype.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		abc = tolower(abc);
		putchar(abc);
		if (abc == 'z')
		{
			abc = 'A';
			for (; abc <= 'z'; abc++)
			{
				putchar(abc);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
