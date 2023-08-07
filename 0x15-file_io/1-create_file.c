#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write 
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int to, n, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	to = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(to, text_content, length);

	if (to == -1 || n == -1)
		return (-1);

	close(to);

	return (1);
}

