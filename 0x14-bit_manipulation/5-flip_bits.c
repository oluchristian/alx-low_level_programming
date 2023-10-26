#include "main.h"

/**
 * flip_bits - number of bits to be flipped to move btw 2 num
 * @n: starting number
 * @m: ending number
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit_index, count = 0;
	unsigned long int prev;
	unsigned long int bit_xor = n ^ m;

	for (bit_index = 63; bit_index >= 0; bit_index--)
	{
		prev = bit_xor >> bit_index;
		if (prev & 1)
			count++;
	}
	return (count);
}

