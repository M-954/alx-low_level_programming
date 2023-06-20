#include <stdio.h>
/**
 * main - Entry program
 *
 * Description: Prints alphabetics in lower case
 *
 * Return: 0 Always (success)
 */
int main(void)
{
char m;
for (m = 'a'; m <= 'z'; m++)
{
putchar(m);
}
putchar('\n');
return (0);
}
