#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - print strings
  * @separator: string to be printed btn strings
  * @n: number of strings passed
  *
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x = 0;
	char *string;

	if (n > 0)
	{
		va_start(args, n);

		while (x < n)
		{
			string = va_arg(args, char *);
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);

			if (x != n - 1 && separator != NULL)
				printf("%s", separator);

			x++;
		}

		va_end(args);
	}

	printf("\n");
}
