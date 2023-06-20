#include <stdio.h>
/**
 * main - Prints alphabets without e and q
 *
 * Returns: o Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}

	putchar('\n');
	return (0);
}
