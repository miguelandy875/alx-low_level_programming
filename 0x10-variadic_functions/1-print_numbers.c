#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - print numbers.
  * @separator: string to be printed btn numbers
  * @n: number of integers passed
  *
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x = 0;

	if (n > 0)
	{
		va_start(args, n);

		while (x < n)
		{
			printf("%d", va_arg(args, int));

			if (x != n - 1  && separator != NULL)
				printf("%s", separator);

			x++;
		}
		va_end(args);
	}
	printf("\n");
}
