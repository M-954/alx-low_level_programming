#include <stdio.h>
/**
 * main - prints base ten numbers using putchar
 *
 * Returns: 0 Always (succes)
 */
int main(void)
{
	int y;

	for (y = 0; y < 10; y++)
	{
		putchar(y + 48);
	}
	putchar('\n');
	return (0);
}
