#include "main.h"
#include <stdio.h>

/**
  * print_rev - Prints a string in reverse
  * @s: The string to print
  *
  * Return: void
  */
void print_rev(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}

	for (counter -= 1; counter >= 0; counter--)
	{
		_putchar(s[counter]);
	}

	_putchar('\n');
}

