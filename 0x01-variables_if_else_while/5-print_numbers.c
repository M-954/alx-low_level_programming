#include <stdio.h>
/**
 * main - Prints all single outputs of base 10
 *
 * Returns: 0 Always (success)
 */
int main(void)
{
	int h = 0;

	while (h < 10)
	{
		printf("%d", h);
		h++;
	}
	printf("\n");
}
