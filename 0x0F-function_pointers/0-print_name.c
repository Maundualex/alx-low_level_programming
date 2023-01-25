#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function thats prints a name passed to it
 *
 * @name: name to print
 * @f: A pointer function
 * 
 * Return: Always 0 (Success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f) /* if any is NULL */
		return;

	f(name);
}
