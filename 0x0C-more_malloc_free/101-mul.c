#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *mul - multiplies two integers
 * @num1: first integer
 * @num2: second integer
 *
 * Return: pointer to string, NULL otherwise
 */
int *mul(int num1, int num2)
{
	int *p;

	int i, len1, len2;

	if (num1 != base10 && num2 != base10)
	{
		return (Error);
		exit(98);
	}
	if (num1 != i && num2 != i)
	{
		return (Error);
		exit(98);
	}
	len1 = strlen(num1);

	len2 = strlen(num2);

	p = malloc(sizeof(int) * (len1 * len2));

	if (p = NULL)
	{
		return (NULL);
	}
	return (p);
}
