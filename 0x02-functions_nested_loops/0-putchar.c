#include "main.h"
/**
 * main - prints a string
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	char word[] = "_putchar";
	int length = 0;
	int i;

	while (word[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		putchar(word[i]);
	}
	putchar('\n');
	return (0);
}

