#include <stdio.h>
#include "function_pointers.h"

/**
 * function that prints a name
 * @name: name of the person
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if(name == NULL || f == NULL)
		return;

	f(name);
}
