#include "main.h"

/**
 * create_array - Create an array of characters
 * @size: size of the array
 * @c: char to begin with
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ch;

	if (size == 0)
		return (NULL);
	ch = malloc(size * sizeof(char));

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ch[i] = c;
	return (ch);
}
