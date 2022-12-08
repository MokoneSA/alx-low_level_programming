#include "main.h"

/**
 * _abs - prints the value of a number
 * @i: number targeted
 * Return: returns 0
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (0);
	}
}
