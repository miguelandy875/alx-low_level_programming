#include "main.h"

/**
  * _puts_recursion - altenative for puts();
  * @str: input
  *
  * Return: Always 0 (Success)
  */
void _puts_recursion(char *str)
{
	 if (*str == '\0')
	{
		_putchar('\n')
		return;
	}

	_putchar(*str);
	str++;
	_puts_recursion(str);
}

