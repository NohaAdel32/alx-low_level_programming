#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of print
 * @f: function that prints
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
