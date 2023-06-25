#include "main.h"

/**
 * factorial - factorial of a number
 * @num: number to be used 
 *
 * Return: factorial of num
 */
int factorial(int num)
{
	if (num < 0)
		return (-1);
	if (num == 0)
		return (1);
	return (num * factorial(num - 1));
}

