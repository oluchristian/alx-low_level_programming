#include "main.h"

/**
 * set_bit - function that sets value of a bit to 1 at given index
 * @n: pointer to the unsigned long int
 * @index: index of the bit to set to 1.
 * Return: 1 if it worked, -1 if failed (if index is not in 64bit range).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/**Check if the index is within valid range of 64bits int*/
	if (index > 63)
		return (-1);
	*n = (1UL << index) | *n;
	return (1);
}

