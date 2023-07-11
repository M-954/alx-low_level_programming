#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *argstostr - concatenates all arguments of a program
 * @ac: the argument count
 * @av: pointer to a pointer to a char
 *
 * Return: pointer to a new string, NULL otherwise
 */
char *argstostr(int ac, char **av)
{
	int i;

	int length;

	char *value;

	int index;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	length = 0;
	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]) + 1;
	}
	value = (char *)malloc(length + 1);
	if (value == NULL)
	{
		return (NULL);
	}
	index = 0;

	for (i = 0; i < ac; i++)
	{
		strcpy(value + index, av[i]);

		index += strlen(av[i]);

		value[index++] = '\n';
	}
	value[index] = '\0';
	return (value);
}
