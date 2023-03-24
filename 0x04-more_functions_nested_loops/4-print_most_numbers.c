#include "main.h"

/**
  * print_most_numbers - write numbers 0 to 9 followed by a new line.
  *
  * condition: Do not print 2 and 4
  *
  * Return: none (void datatype in use)
  */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		else
		{
			_putchar(n);
		}
	}

	_putchar('\n');
}

