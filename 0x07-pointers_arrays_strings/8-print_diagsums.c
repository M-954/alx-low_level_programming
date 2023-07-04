#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the two diagonals of a matrix
 * @a: pointer to matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int c;

	int sum1 = 0;

	int sum2 = 0;

	for (c = 0; c < size; c++)
	{
		sum1 += *(a + c * size + c);
		sum2 += *(a + c * size + (size - 1 - c));
	}
	printf("%d, %d\n", sum1, sum2);
}
