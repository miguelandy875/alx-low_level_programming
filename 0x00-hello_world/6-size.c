#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
pintf("Size of a char: %d byte(s)\n", sizeof(char));
pintf("Size of an int: %d byte(s)\n", sizeof(int));
pintf("Size of a long int: %d byte(s)\n", sizeof(long int));
pintf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
pintf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}

