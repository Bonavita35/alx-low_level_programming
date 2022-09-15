#include "main.h"

/* print declaration */

void print(unsigned int d);

/**
 * print_number - Prints an integer
 * @n: input integer
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	print(n);
}

/**
 * print - subfunction to print recursively
 * @d: variable to be printed
 */
void print(unsigned int d)
{
	if (d / 10)
		print(d / 10);
	_putchar('0'  + d % 10);
}
