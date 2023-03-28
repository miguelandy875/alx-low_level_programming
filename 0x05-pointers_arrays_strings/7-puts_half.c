#include "main.h"

/**
  * puts_half - Prints half of a string
  * @str: The string to print
  *
  * Return: void
  */
void puts_half(char *str)
{
	int counter = 0;
	int z;

	while (str[counter] != '\0')
	{
		counter++;
	}

	if (counter % 2 == 1)
	{
		z = (counter - 1) / 2;
		z += 1;
	}
	else
	{
		z = counter / 2;
	}

	for (; z < counter; z++)
	{
		_putchar(str[z]);
	}

	_putchar('\n');
}

