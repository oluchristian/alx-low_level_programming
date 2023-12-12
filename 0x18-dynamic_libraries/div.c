#include "lists.h"
/**
 * div - Divides two integers
 * @a: Dividend
 * @b: Divisor
 *
 * Return: Result of @a divided by @b
 */
int div(int a, int b)
{
	if (b == 0)
		return (0); /* Handling division by zero */
	return (a / b);
}

