#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int value;
	char *ptr;

	value = 1;
	/**point the char ptr to samme mem location as value*/
	ptr = (char *) &value;

	/**Convert the value at the llocation to an int and return*/
	return ((int)*ptr);
}

