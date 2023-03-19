#include<stdio.h>

/**
 * main - Entry point
 *
 * return: Alway 0 (success)
 */
int main(void)
{
	char c;
	short s;
	int i;
	long l;

	print(" The size of Char datatype is %lu byte(s)", sizeof(c));
	print(" The size of short datatype is %lu byte(s)", sizeof(s));
	print(" The size of int datatype is %lu byte(s)", sizeof(i));
	print(" The size of long datatype is %lu byte(s)", sizeof(l));
	return (0);
}
