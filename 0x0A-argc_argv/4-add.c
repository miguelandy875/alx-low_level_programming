#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - prints minimum number of coins for monei change
  * @argc: arguments count
  * @argv: array of strings
  *
  * Return: 0 Success, 1 failure
  */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc != 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= 48 && *argv[i] <= 57)
			{
				sum += atoi(argv[i]);
			}else{
				printf("Error\n");
				return (1);
				break;
			}
		}
		printf("%d\n", sum);
	}else{
		printf("0\n");
	}
	return(0);
}
