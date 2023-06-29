#include "main.h"
/**
 * reverse_array - prints integers in reverse
 * @a: array of integers
 * @n: numbers to be swapped
 */
void reverse_array(int *a, int n)
{
	int y;

	for (y = 0; y < n / 2; y++)
	{
		int temp = a[y];

		a[y] = a[n - y - 1];

		a[n - y - 1] = temp;
	}
}
