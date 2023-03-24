#include "main.h"

/**
  * print_numbers - writes 0 - 9 to stdout
  * Return: none (the function has a void datatype)
  */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}

