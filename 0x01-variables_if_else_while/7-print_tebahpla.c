#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char revalph;

	for (revalph = 'z'; revalph >= 'a'; revalph--)
		putchar(revalph);
		putchar('\n');

	return (0);
}
