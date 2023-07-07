#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: the string
 *
 * Return: integer, 0 if no number is on screen
 */
int _atoi(char *s)
{
	int a = 0;

	unsigned int l = 0;

	int min = 1;

	int mi = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			min *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			mi = 1;
			l = (l * 10) + (s[a] - '0');
			a++;
		}
		if (mi == 1)
		{
			break;
		}
		a++;
	}
	l *= min;
	return (l);
}
