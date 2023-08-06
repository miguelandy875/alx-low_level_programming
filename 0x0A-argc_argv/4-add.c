#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  * main - args positive numbers sum
  * @argc: argument
  * @argv: array of argument
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int o;
	unsigned int p, sum = 0;
	char *q;

	if (argc > 1)
	{
		for (o = 1; o < argc; o++)
		{
			q = argv[o];

			for (p = 0; p < strlen(q); p++)
			{
				if (q[p] < 48 || q[p] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(q);
			q++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}


