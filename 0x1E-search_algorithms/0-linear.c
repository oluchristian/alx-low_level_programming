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
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%zu] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			printf("Found %i at index: %zu\n", array[i], i);
			return (i);
		}
	}
	/**
	 * Value not found
	*/
	return (-1);
}
