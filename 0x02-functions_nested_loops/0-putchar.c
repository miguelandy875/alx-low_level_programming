#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char arr_of_char[9];
	int counter;

	for (counter = 0; counter < 10 ; counter++)
		_putchar(arr_of_char[counter]);
	_putchar('\n');

	return (0);
}



