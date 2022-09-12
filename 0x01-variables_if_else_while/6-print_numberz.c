#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all decimal digits
 * without using printf
 * Return: Exit status is zero means success
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
