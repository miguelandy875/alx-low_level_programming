#include "main.h"

/**
  * print_line - draws a straight line in the terminal
  * @n: the number of times the character '_' should be printed
  *
  * Return: none (void datatype in use)
  */
void print_line(int n)
{
	int p;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 0; p < n; p++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}

