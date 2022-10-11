#include "main.h"

/**
 * _strdup - returns a pointer to a new string which
 * is a duplicate of the string.
 * @str: string to duplicate
 * Return: pointer to the allocate space in memory
 */

char *_strdup(char *str)
{
	unsigned int i = 0, len = 0;

	char *ptr;

	if (str == 0)
		return (NULL);

	while (str[len])
		len++;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == 0)
		return (NULL);

	while ((ptr[i] = str[i]) != '\0')
		i++;
	return (ptr);
}
