#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: number to be represented in binary
 */
void print_binary(unsigned long int n)
{
	int bit_position;
	int bit_set = 0;
	unsigned long int mask;

	for (bit_position = 63; bit_position >= 0; bit_position--)
	{
		mask = n >> bit_position;
		if (mask & 1)
		{
			_putchar('1');
			bit_set++;
		}
		else if (mask)
		{
			_putchar('0');
		}
	}
	if (!mask)
	{
		_putchar('0');
	}
}

