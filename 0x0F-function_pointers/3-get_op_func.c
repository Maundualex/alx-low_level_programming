#include <stdio.h>
#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - function pointer that selects the correct function to perform
 * the operation asked by the user
 *
 * @s: a character pointer pointing to a symbol from the program argument
 *
 * Return: pointer to the function that corresponds to the
 * operator given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	/* struct opts of struct op_t */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	}
	int i = 0;

	while (i < 5)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
