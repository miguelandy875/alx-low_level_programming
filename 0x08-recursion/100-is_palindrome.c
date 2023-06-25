#include "main.h"

int check_pal(char *str, int it, int len);
int _strlen_recursion(char *str);

/**
 * is_palindrome - verifies a string for palindrome
 * @str: string to be used
 *
 * Return: 1 true, 0 otherwise
 */
int is_palindrome(char *str)
{
	if (*str == 0)
		return (1);
	return (check_pal(str, 0, _strlen_recursion(str)));
}

/**
 * _strlen_recursion - returns string length
 * @str: string to be used
 *
 * Return: string length
 */
int _strlen_recursion(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen_recursion(str + 1));
}

/**
 * check_pal - verifies characters recursively for palindrome
 * @str: string to be used
 * @it: iterator
 * @len: string length
 *
 * Return: 1 for palindrome, 0 otherwise
 */
int check_pal(char *str, int it, int len)
{
	if (*(str + it) != *(str + len - 1))
		return (0);
	if (it >= len)
		return (1);
	return (check_pal(str, it + 1, len - 1));
}

