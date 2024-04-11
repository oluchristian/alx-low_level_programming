#include "search_algos.h"
/**
 * binary_search - Search for a value in an array of integers
 * @array: Element of the array to search
 * @size: Number of elements in array
 * @value: The value to search for
 * Return: index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t middle;
	size_t start = 0;
	size_t end = size - 1;

	if (array == NULL)
		return (-1);
	while (start <= end)
	{
		middle = start + (end - start) / 2;

		printf("Searching in array: ");
		for (size_t i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
			printf(", ");
		}
		printf("\n");
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			start = middle + 1;
		else
			end = middle - 1;
	}
	return (-1);
}
