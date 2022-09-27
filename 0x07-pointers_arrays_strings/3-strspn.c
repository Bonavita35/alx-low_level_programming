#include "main.h"

/**
 * _strspn - function that gets the length of prefix substring.
 * @s: param 1
 * @accept: param 2
 * Return: char value
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
