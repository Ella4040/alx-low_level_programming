#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: n number of bytes read and printed
 * 0 when filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t to;
	ssize_t n;
	ssize_t t;

	to = open(filename, O_RDONLY);
	if (to == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(to, buffer, letters);
	n = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(to);
	return (n);
}
