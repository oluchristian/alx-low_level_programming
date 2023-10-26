#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function to convert a binary to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: Coverted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int result = 0;

	if (!b)
		return (0);
	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);
		result = 2 * result + (b[index] - '0');
	}
	return (result);
}

