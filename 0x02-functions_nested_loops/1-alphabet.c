#include "main.h"
/**
 * main - entry point
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - prints alphabets in lowercase
 */
void print_alphabet(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
}
