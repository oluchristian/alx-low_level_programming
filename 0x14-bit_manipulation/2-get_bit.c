#include "main.h"

/**
 * get_bit - function that returns value of a bit at given index
 * @n: value to search for the bit
 * @index: index of the bit to retrieve
 * Return: The value of the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;
	/**Check if the index is within range of 0-63 else return -1*/
	if (index > 63)
		return (-1);
	bit_value = (n >> index) & 1;
	return (bit_value);
}

