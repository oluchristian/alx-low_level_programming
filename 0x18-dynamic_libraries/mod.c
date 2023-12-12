#include "lists.h"
/**
 * mod - Computes the modulo of two integers
 * @a: Dividend
 * @b: Divisor
 *
 * Return: Remainder of @a divided by @b
 */
int mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}

