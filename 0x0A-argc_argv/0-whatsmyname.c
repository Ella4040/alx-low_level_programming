#include <stdio.h>
#include "main.h"

/** Write a program that prints its name, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return : always 0(succes)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
