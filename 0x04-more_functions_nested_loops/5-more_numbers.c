#include "main.h"

/**
  * more_numbers - write 10 times numbers from 0 - 14 followed by a new line.
  *
  * Return: none (void datatype in use)
  */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
				_putchar((b / 10));
			_putchar((b % 10));
		}
		_putchar('\n');
	}
}

