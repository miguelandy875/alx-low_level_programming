#include "main.h"

/**
 * _pow_recursion - returns the value of r raised to the power of s
 * @r: value to be raised
 * @s: power
 *
 * Return: the power
 */
int _pow_recursion(int r, int s)
{
	if (s < 0)
		return (-1);
	if (s == 0)
		return (1);
	return (r * _pow_recursion(r, s - 1));
}
