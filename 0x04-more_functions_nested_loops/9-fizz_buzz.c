#include <stdio.h>
#include "main.h"
#define stopVar 100

/**
 * main - Fizz buzz challenge
 * Return: Zero if successful
 */

int main(void)
{
	int i = 1;

	do {
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != stopVar)
			printf(" ");
		i++;
	} while (i <= stopVar);
	printf("\n");

	return (0);
}
