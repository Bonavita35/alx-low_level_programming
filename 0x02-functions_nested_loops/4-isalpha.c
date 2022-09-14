#include "main.h"

/**
 * Decription: _isalpha - check for alphabet charaters
 * Return: 0 if not an alphabet, 1 if alphabet
 */
int _isalpha(int c)
{
	if ((c >= 97 && <= 122) || (c >= 56 && c <= 80))
		return (1);
	return (0);
}
