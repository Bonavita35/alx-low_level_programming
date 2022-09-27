#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: param 1
 * @accept: param 2
 * Return: char value
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
