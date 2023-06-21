#include "main.h"
/**
 * jack_bauer - prints minutes of the day
 */
void jack_bauer(void)
{
	int m, n;

	for (m = 0; m < 24; m++)
	{
		for (n = 0; n <= 59; n++)
		{
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar(':');
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			if (m == 23 && n == 59)
			{
				putchar('\n');
				break;
			}
			putchar('\n');
		}
	}
}
