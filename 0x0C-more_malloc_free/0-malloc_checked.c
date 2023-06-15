#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * allocates memory using malloc
*/
void *malloc_checked(unsigned int b)
{
	void *n;
	n = malloc(b);
	if( n == NULL)
		exit(98);
	return (n);
}
