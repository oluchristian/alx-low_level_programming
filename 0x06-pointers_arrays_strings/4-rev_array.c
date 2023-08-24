#include "main.h"
/**
 * array_reversal - reverses arrays of integers
 * @a: array
 * @n: number of array elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
