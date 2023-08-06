#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - multiplication of two args num
  * @argc: arguments count
  * @argv: array of strings
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{

	if (argc > 1)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

