#include "main.h"

/**
  * puts2 - Prints every other character of a string
  * @str: The string to be treated
  *
  * Return: void
  */
void puts2(char *str)
{
	int x, counter;

	counter = 0;

	while (str[counter] != '\0')
	{
		counter++;
	}

	for (x = 0; x < counter; x += 2)
	{
		_putchar(str[x]);
	}

	_putchar('\n');
}

