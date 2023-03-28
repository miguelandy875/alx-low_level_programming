#include "main.h"

/**
  * print_triangle - prints a triangle, followed by a new line.
  * @size:  the size of the triangle
  *
  * Return: none (void datatype in use)
  */
void print_triangle(int size)
{
	int a, b, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = size - a; b > 1; b--)
			{
				_putchar(32);
			}

			for (z = 0; z <= a; z++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}

