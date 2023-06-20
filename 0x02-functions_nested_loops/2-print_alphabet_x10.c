#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase letters 10 times
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int m;

	while (i < 10)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
		i++;
	}
}
