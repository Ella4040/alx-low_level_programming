#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
* Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, x1 = 0, x2 = 0;

	while (s1 && s1[x1])
		x1++;
	while (s2 && s2[x2])
		x2++;

	if (n < x2)
		s = malloc(sizeof(char) * (x1 + n + 1));
	else
		s = malloc(sizeof(char) * (x1 + x2 + 1));

	if (!s)
	return (NULL);

	while (i < x1)
	{
		s[i] = s1[i];
		i++;
	}
while (n < x2 && i < (x1 + n))
		s[i++] = s2[j++];

	while (n >= x2 && i < (x1 + x2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
