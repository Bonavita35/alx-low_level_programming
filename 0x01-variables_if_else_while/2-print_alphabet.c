#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print a-z to standard output
 * Return: Exit status is zero means success
 */

int main(void)
{
	char low;

	for (low = 'a' ; low <= 'z' ; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
