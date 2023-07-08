#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main -Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 success, else return 1
 */
int main(int argc, char *argv[])
{
	int a, i;

	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
	printf("%d\n", sum);
	return (0);
	}
	else
	{
		a = atoi(argv[1]);

		if (a == 0 && argv[1][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
	}
		return (0);
}
