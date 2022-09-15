#include "main.h"

/**
 * print_line - Prints '_' n times
 * @n: specifies how many times printed
 * Return: Null
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n--)
			_putchar('_');
		_putchar('\n');
	}
}
