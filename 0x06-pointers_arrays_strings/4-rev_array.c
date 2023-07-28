#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j;
	int b;

	for (j = 0; j < n--; j++)
	{
		b = a[j];
		a[j] = a[n];
		a[n] = b;
	}
}

