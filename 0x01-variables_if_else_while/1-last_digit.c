
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ldgt = n % 10
	if (ldgt > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, ldgt);
	}
	else if (n == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, ldgt);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 andd not 0\n", n, ldgt);
	}

	return (0);
}

