#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
/**
 * print_name - prints a name
 * @name: pointer to the name
 * @f: pointer function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
#endif
