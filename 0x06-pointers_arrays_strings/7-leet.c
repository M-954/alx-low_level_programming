#include "main.h"
/**
 * *leet - encodes string into 1337
 * @z: the string
 *
 * Return: the string z
 */
char *leet(char *z)
{
	int k, l;

	char line1[] = "aAeEoOtTlL";

	char line2[] = "4433007711";

	for (k = 0; z[k] != '\0'; k++)
	{
		for (l = 0; l < 10; l++)
		{
			if (z[k] == line1[l])
			{
				z[k] = line2[l];
			}
		}
	}
	return (z);
}
