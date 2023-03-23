#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - write a-z to stdout
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
