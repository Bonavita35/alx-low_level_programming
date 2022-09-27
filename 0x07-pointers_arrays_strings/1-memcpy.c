#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: param 1
 * @src: param 2
 * @n: param 3
 * Return: char value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
