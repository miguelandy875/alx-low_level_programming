#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_all - prints anything.
  * @format: tpes of args passed
  *
  * Return: void
  */
void print_all(const char * const format, ...)
{
	va_list args;
	f_dt form_types[] = {
		{ "c", print_a_char },
		{ "i", print_a_integer },
		{ "f", print_a_float },
		{ "s", print_a_char_ptr }
	};
	unsigned int m = 0;
	unsigned int n = 0;
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[m])
	{
		n = 0;
		while (n < 4)
		{
			if (format[m] == *form_types[n].identifier)
			{
				form_types[n].f_ptr(separator, args);
				separator = ", ";
			}
			n++;
		}
		m++;
	}

	va_end(args);
	printf("\n");
}

/**
  * print_a_char - prints a character of char type
  * @separator: space of the character
  * @args: variadic arguments
  *
  * Return: void
  */
void print_a_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
  * print_a_integer - prints a character of integer type
  * @separator: space btn character
  * @args: variadic arguments
  *
  * Return: void
  */
void print_a_integer(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
  * print_a_float - prints a character of float type
  * @separator: space btn character
  * @args: variadic arguments
  *
  * Return: void
  */
void print_a_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
  * print_a_char_ptr - prints pointer valeur with char tpe
  * @separator: space btn character
  * @args: variadic arguments
  *
  * Return: void
  */
void print_a_char_ptr(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, arg);
}

