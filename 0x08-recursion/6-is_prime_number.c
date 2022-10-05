#include "main.h"

/**
 * prime_num - Checks if number is prime number
 * @n: number
 * @i: iterator
 * Return: 1 if prime && 0 is !prime
 */

int prime_num(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + prime_num(n, i + 1));
}

/**
 * is_prime_number - checks if @n is a prime number
 * @n: number to check
 * Return: prime number
 */

int is_prime_number(int n)
{
	if (n == 0 || n < 0 || n == 1)
		return (0);
	return (prime_num(n, 2));
}
