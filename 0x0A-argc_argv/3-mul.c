#include <stdio.h>
		
#include "main.h"
		

		
/**
		
 * _atoi - converts string into integer
		
 * @str: string to be used
		
 *
		
 * Return: converted integer from string		
 */
		
int _atoi(char *str)
		
{
		
	int o, p, q, len, r, num;
		

		
	o = 0;
		
	p = 0;
		
	q = 0;
		
	len = 0;
		
	r = 0;
		
	num = 0;
		

		
	while (str[len] != '\0')
		
		len++;
		

		
	while (o < len && r == 0)
		
	{
		
		if (str[o] == '-')
		
			++p;
		

		
		if (str[o] >= '0' && str[o] <= '9')
		
		{
		
			num = str[o] - '0';
		
			if (p % 2)
		
				num = -num;
		
			q = q * 10 + num;
		
			r = 1;
		
			if (str[o + 1] < '0' || str[o + 1] > '9')
		
				break;
		
			r = 0;
		
		}
		
		o++;
		
	}
		

		
	if (r == 0)
		
		return (0);
		

		
	return (q);
		
}
		

		
/**
		
 * main - product of two numbers
		
 * @argc: arguments
		
 * @argv: array of args
		
 *
		
 * Return: 0 success, 1 failure
		
 */
		
int main(int argc, char *argv[])
		
{
		
	int prdct, k, l;
		

		
	if (argc < 3 || argc > 3)
		
	{
		
		printf("Error\n");
		
		return (1);
		
	}
		

		
	k = _atoi(argv[1]);
		
	l = _atoi(argv[2]);
		
	prdct = k * l;
		

		
	printf("%d\n", prdct);
		

		
	return (0);
		
}

