#include "main.h"

/**
 * print_last_digit - prints the last digits of a number
 * @x: the number in question.
 * Return: Value of the last digits.
 */

int print_last_digit(int x)

{
	int last_digit = x % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
