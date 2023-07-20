#include<stdio.h>
#include<stdlib.h>
/**
 * main- Entry point
 * @argc: argument count
 * @argv: argument vectors
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int o, p;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	p = atoi(argv[1]);
	if (p < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (o = 0; o < p; o++)
	{
		printf("%02hhx", *((char *)main + o));
		if (o < p - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
