#include "main.h"

/**
 * more_numbers - Prints 0-14 10 times
 * Return: Nothing
 */

void more_numbers(void)
{
	int i = 0, j;


	while (i < 10)
	{
		char *s = "01234567891011121314";

		for (j = 0; j <= 19; j++)
			_putchar(s[j]);
		_putchar('\n');
		i++;
	}
}
