#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lcase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
		putchar(lcase);
		putchar('\n');
	return (0);
}
