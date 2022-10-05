#include "main.h"

/**
 * _strlen_recursion - Get the length of a string
 * @s: string
 * Return: something
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}

/**
 * palindrome_checker - checks if string is palindrome
 * @s: string to check
 * @i: index
 * Return: 0 always
 */

int palindrome_checker(char *s, int i)
{
	if (i < 1)
		return (1);
	if (*s == *(s + i))
		return (palindrome_checker(s + 1, i - 2));
	return (0);
}

/**
 * is_palindrome - checks palindrome_checker
 * @s: string to check
 * Return: something
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (palindrome_checker(s, length - 1));
}
