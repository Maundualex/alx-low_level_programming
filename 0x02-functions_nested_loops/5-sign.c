#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
 * @n : number to check
 * Return: 1 for positive num, -1 for negative num or 0 for anything else
 *
 */

int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	}
	else
	{
		test = -1;
		_putchar('-');
	}
	return (test);
}
