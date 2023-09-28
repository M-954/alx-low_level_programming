#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to a string
 *
 * Return: converted number or 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;
	int len = 0;

	if (b == NULL)
		return (0);
	len = strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			num <<= 1;
			num += (b[i] - '0');
		}
		else
			return (0);
	}
	return (num);
}
