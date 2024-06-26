#include "search_algos.h"

/**
 * linear_search - Search for a value in an array of integers
 * @array: Element of the array to search
 * @size: Number of elements in array
 * @value: The value to search for
 * Return: index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
