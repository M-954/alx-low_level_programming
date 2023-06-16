#include <stdio.h>
/**
 * main - Entry program
 *
 * Description: Prints lowercase and uppercase alphabets
 *
 * Returns: 0 Always (success)
 */

main(void)
{

char m;

for (m = 'a'; m <= 'z'; m++)
{
putchar(m);
}
for (m = 'A'; m <= 'Z'; m++)
{
putchar(m);
}

putchar('\n');
return (0);

}
