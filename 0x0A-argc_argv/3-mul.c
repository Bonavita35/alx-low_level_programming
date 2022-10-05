#include "main.h"

/**
 * main - Multiplies two numbers and prints to stdout ff'd by a new line
 * @argc: argument count
 * @argv: arguments
 * Return: 0 for success, 1 for Error
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return 0;
}
