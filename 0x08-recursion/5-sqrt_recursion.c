#include "main.h"

int actual_sqrt_recursion(int num, int it);

/**
 * _sqrt_recursion - sqrt of a number
 * @num: number to be used
 *
 * Return: sqrt
 */
int _sqrt_recursion(int num)
{
	if (num < 0)
		return (-1);
	return (actual_sqrt_recursion(num, 0));
}

/**
 * actual_sqrt_recursion - finds the sqrt by recursing
 * @num: number to be used
 * @it: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int num, int it)
{
	if (it * it > num)
		return (-1);
	if (it * it == num)
		return (it);
	return (actual_sqrt_recursion(num, it + 1));
}


