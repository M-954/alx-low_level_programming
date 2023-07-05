#include "main.h"
/**
 * is_prime_number - prints if integer is prime or not
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_number_recursive(n, n - 1));
}
/**
 * is_prime_number_recursive - prints if integer is prime or not
 * @n: number to check
 * @checker: checks if number is prime
 *
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_number_recursive(int n, int checker)
{
	if (checker == 1)
	{
		return (1);
	}
	if (n % checker == 0)
	{
		return (0);
	}
	return (is_prime_number_recursive(n, checker - 1));
}
