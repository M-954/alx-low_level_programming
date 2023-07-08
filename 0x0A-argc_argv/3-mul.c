#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);

		num2 = atoi(argv[2]);

		mul = num1 * num2;

		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
	return (1);
	}
}
