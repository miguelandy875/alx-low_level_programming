#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *str)
{
	int counter = 0;

	if (*str)
	{
		counter++;
		counter += _strlen_recursion(str + 1);
	}

	return (counter);

