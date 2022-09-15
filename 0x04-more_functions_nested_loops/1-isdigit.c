#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Checks for digits ASCII characters
 * @c: This is an ASCII integer
 * Return: 0 if not digit, 1 if digit
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
