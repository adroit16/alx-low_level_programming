#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name passed to it
 * @name: char to display to the stdout
 * @f: A pointer function
 * Return: No return cause we've declared VOID a R_TYPE
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f) /* if any is NULL */
		return;

	f(name);
}
