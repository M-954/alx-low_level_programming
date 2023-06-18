#include <stdio.h>
/**
 * main - outputs single digits separated with commas
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	int o;

	for (o = 0; o < 10; o++)
	{
		putchar((o % 10) + '0');
		if (o == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
