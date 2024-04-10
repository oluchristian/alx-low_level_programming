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
	int i = 0;
	int found = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%i]", i, array[i]);
		if (array[i] == value)
		{
			found = 1;
			printf("Found %i at index: %i", array[i], i);
			break;
		}
	}
	if (found == 0)
	{
		return (-1);
	}
	return (i);
}
