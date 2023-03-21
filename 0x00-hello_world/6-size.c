#include<stdio.h>

/**
 * main - Entry point
 *
 * Return:Alway 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;

	printf("size of a Char: %d byte(s)\n", sizeof(c));
	printf("size of an int: %d byte(s)\n", sizeof(i));
	printf("size of a long int: %d byte(s)\n", sizeof(l));
	printf("size of a long long int: %d byte(s)\n", sizeof(ll));
	printf("size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
