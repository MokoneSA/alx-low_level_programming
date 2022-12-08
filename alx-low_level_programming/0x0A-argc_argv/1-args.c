#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it received
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
