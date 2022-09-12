#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints z-a to standard output
 * Return: Exit status is zero means success
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');

	return (0);
}
