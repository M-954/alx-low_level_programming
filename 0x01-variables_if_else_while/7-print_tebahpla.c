#include <stdio.h>
/**
 * main - Prints z-a using putchar
 *
 * Returns: 0 Always(success)
 */
int main(void)
{
	char b;

	for (b = 'z'; b >= 'a'; b--)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
