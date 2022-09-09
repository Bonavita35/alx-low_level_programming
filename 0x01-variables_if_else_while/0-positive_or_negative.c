#include <stdlib.h>
#include <time>
#include <stdio.h>

/**
 * main - print a random number and states whether it is positive, negative or zero.
 * Return: always 0.
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		prinf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		ptintf("%d is zero\m", n);

	return(0);
}
