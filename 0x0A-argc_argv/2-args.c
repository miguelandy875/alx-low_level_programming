#include <stdio.h>
		
#include "main.h"
		

		
/**
		
 * main - prints all received
		
 * @argc: arguments
		
 * @argv: array of args
		
 *
		
 * Return: Always 0 (Success)
		
 */
		
int main(int argc, char *argv[])
		
{
		
	int x;
		

		
	for (x = 0; x < argc; x++)
		
	{
		
		printf("%s\n", argv[x]);
		
	}
		

		
	return (0);
		
}

