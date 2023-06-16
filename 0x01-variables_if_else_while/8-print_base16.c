#include <stdio.h>
/**
 * main - prints all hexadecimals using putchar
 *
 */
int main(void)
{
	int i;
	char lowercase;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
	}
	for (lowercase = 'a'; lowercase <= 'f'; lowercase++)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
