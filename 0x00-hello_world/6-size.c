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

	prinff(" The size of Char datatype is %lu byte(s)\n", sizeof(c));
	prinf(" The size of short datatype is %lu byte(s)\n", sizeof(s));
	prinf(" The size of int datatype is %lu byte(s)\n", sizeof(i));
	prinf(" The size of long datatype is %lu byte(s)\n", sizeof(l));
	return (0);
}
