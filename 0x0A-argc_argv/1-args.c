#include <stdio.h>
#include "main.h"

/**
  * main - counts/print the number of args passed to the program
  * @argc: arguments
  * @argv: array of args
  *
  * Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
