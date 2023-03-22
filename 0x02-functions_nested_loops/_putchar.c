#include <unistd.h>

/**
 * _putchar - writes the character ch to stdout
 * @ch: The character to print
 *
 * Return: 1 success
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
