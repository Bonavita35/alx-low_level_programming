#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print to the standard
 * Return: 0 (sucess)
 */

int main(void)
{
	int n, Id;

	srand(time(0));
	n = rand() RAND_MAX / 2;
	Id = n % 10;

	if (Id > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	else if (Id == 0)
		printf("Last digit of %d is %d and is %d\n", n, ld, ld);
	else if (Id < 6 && Id != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);

	return (0);
}
