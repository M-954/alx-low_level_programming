#include "main.h"
/**
 * more_numbers - prints 0 - 9 ten times
 */
void more_numbers(void)
{
	int u;
	int y;

	for (y = 0; y <= 9; y++)
	{
		for (u = 0; u <= 14; u++)
		{
			if (u > 9)
			{
				_putchar((u / 10) + '0');
			}
			_putchar((u % 10) + '0');
		}
		_putchar('\n');
	}
}
