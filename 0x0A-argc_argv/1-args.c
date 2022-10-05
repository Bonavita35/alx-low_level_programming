#include "main.h"

/**
 * main - prints the number of arguments passed into main
 * @argc: argument count
 * @argv: arguments in the array
 * Return: 0 always
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
