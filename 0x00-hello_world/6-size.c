#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Alway 0 (success)
 */
int main(void)
{
	char c;
	short s;
	int i;
	long l;

	printf(" The size of Char datatype is %lu byte(s)\n", sizeof(c));
	printf(" The size of short datatype is %lu byte(s)\n", sizeof(s));
	printf(" The size of int datatype is %lu byte(s)\n", sizeof(i));
	printf(" The size of long datatype is %lu byte(s)\n", sizeof(l));
	return (0);
}
