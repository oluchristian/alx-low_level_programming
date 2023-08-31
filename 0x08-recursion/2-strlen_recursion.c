#include "main.h"
/**
 * _strlen_recursion - Returns length of a string.
 * @s: This is the string to be measured.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}

