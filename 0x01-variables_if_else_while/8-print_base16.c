#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char lcase;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (lcase = 'a'; lcase <= 'f'; lcase++)
		putchar(lcase);
	putchar('\n');

	return (0);
}
