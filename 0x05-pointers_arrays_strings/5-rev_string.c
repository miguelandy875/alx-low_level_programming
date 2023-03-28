#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int x, counter, z;
	char *a, temp;

	a = s;

	while (s[counter] != '\0')
	{
		counter++;
	}

	for (z = 1; z < counter; z++)
	{
		a++;
	}

	for (x = 0; x < (counter / 2); x++)
	{
		temp = s[x];
		s[x] = *a;
		*a = temp;
		a--;
	}
}

