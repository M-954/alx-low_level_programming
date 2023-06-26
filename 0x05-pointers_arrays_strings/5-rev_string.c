#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int l = strlen(s);

	int t;

	for (t = 0; t < l / 2; t++)
	{
		char temp = s[t];

		s[t] = s[l - t - 1];

		s[l - t - 1] = temp;
	}
}
