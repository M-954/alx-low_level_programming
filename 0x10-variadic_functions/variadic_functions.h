#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void p_char(va_list args);
void p_integer(va_list args);
void p_float(va_list args);
void p_string(va_list args);

/**
 * struct p - custom data structure
 * @f: pointer to function
 * @s: pointer to string
 */
typedef struct p
{
	char *s;
	void (*f)(va_list);
} prnt;
#endif
