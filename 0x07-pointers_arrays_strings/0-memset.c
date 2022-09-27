#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: param 1
 * @b: param 2
 * @n: param 3
 * Return: char value
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
