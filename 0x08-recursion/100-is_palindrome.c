#include <string.h>
#include "main.h"
/**
 * is_palindrome - prints if string is palindrome or not
 * @s: string to check
 *
 * Return: - 1 if is palindrome, 0 if is not
 */
int is_palindrome(char *s)
{
	int l = strlen(s);

	return (is_palindrome_recursion(s, 0, l - 1));
}
/**
 * is_palindrome_recursion - prints if string is palindrome or not
 * @s: string to be checked
 * @a: start of string
 * @b: end of string
 *
 * Return: 1 if is palindrome, 0 if is not
 */
int is_palindrome_recursion(char *s, int a, int b)
{
	if (a >= b)
	{
		return (1);
	}
	if (s[a] == s[b])
	{
		return (is_palindrome_recursion(s, a + 1, b - 1));
	}
	return (0);
}
