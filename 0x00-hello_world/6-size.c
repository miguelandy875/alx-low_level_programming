#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Alway 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf(" size of a Char:  %lu byte(s)\n", sizeof(c));
	printf(" size of a int:  %lu byte(s)\n", sizeof(i));
	printf(" size of a long:  %lu byte(s)\n", sizeof(l));
	printf(" size of a long long:  %lu byte(s)\n", sizeof(ll));
	printf(" size of a float:  %lu byte(s)\n", sizeof(f));
	return (0);
}
