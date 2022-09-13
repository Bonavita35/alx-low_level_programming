#include "main.h"

/**
 * print_alphabet - Prints a-z in lowercase
 * Return: returns nothing/void
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++
	}

	_putchar('\n');
}
