#include "main.h"
#include <unistd.h>
/**
 * main - entry program
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * _putchar - prints out char c
 * @c: char to printout
 *
 * Return: 1 success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_alphabet - prints alphabets in lowercase
 */
void print_alphabet(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
