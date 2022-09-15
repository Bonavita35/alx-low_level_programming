#include "main.h"

/**
 * print_triangle - Prints triangle with size var
 * @var: size of triangle to print
 * Return: Void
 */

void print_triangle(int var)
{
	if (var < 1)
		_putchar('\n');
	else
	{
		int size = 1;

		do {
			int i = 1;

			for (; i <= var; i++)
			{
				if (i > (var - size))
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
			size++;
		} while (size <= var);
	}
}
