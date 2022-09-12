#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Selectively prints alphabets to the screen.
 * Return: Exit status is zero
 */

int main(void)
{

	int i;

	for (i = 97; i <= 122; i++)
	{
		if (!(i == 113 || i == 101`))
			putchar(i);
	}
	putchar('\n');
	return (0);
}
