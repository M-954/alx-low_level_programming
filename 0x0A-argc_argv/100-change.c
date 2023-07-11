#include <stdio.h>
#include <stdlib.h>
/**
 * print_min_coins - prints number of coins
 * @cents: the cents to print coins from
 *
 * Return: returns number of coins
 */
int print_min_coins(int cents)
{
	int coins = 0;

	while (cents >= 25)
	{
		cents -= 25;

		coins++;
	}
	while (cents >= 10)
	{
		cents -= 10;

		coins++;
	}
	while (cents >= 5)
	{
		cents -= 5;

		coins++;
	}
	while (cents >= 2)
	{
		cents -= 2;

		coins++;
	}
	coins += cents;
	return (coins);
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 success, 1 if argument is not two
 */
int main(int argc, char *argv[])
{
	int r, a;

	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (r = 1; r < argc; r++)
	{
		a = atoi(argv[r]);

		if (a < 0)
		{
			printf("0\n");
			return (0);
		}
		coins = print_min_coins(a);
		printf("%d\n", coins);
	}
	return (0);
}
