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
	int i;

	char *e;

	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		long num = strtol(argv[i], &e, 10);

		if (*e != '\0')
		{
			printf("Error\n");
			return (1);
		}
		sum += (int)num;
	}
	printf("%d\n", sum);
	return (0);
}
