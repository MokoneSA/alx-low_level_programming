#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers go there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* betty style for functions main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* code goes there */
	if (n > 0)
	{
		printf("is positive");
	}
	if (n == 0)
	{
		printf("is zero");
	}
	if (n < 0)
	{
		printf("is negative");
	}
	return (0);
}