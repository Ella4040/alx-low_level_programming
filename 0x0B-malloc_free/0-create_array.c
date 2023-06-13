#include "main.h"
/**
* creates an array of chars, and initializes it with a specific char ();
* @c: create
* Return: size 0 (NULL)
 */
char *create_array(unsigned int size, char c);
{
	char *y;
	unsigned int i;

	y = malloc(sizeof(char) * size);
	if (size == 0 || y == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		y[i] = c;
	return (y);
}
