#include "main.h"

int actual_prime(int num, int it);

/**
 * is_prime_number - verifies if an integer is a prime number
 * @num: number to be used
 *
 * Return: 1 for prime & 0 otherwise
 */
int is_prime_number(int num)
{
	if (num <= 1)
		return (0);
	return (actual_prime(num, num - 1));
}

/**
 * actual_prime - verify for prime recursively
 * @num: number to be used
 * @it: iterator
 *
 * Return: 1 for prime & 0 othewise
 */
int actual_prime(int num, int it)
{
	if (it == 1)
		return (1);
	if (num % it == 0 && it > 0)
		return (0);
	return (actual_prime(num, it - 1));
}

