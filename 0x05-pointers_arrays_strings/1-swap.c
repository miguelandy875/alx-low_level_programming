#include "main.h"

/**
  * swap_int - Swaps the values of two integers
  *
  * @a: An integer to swap
  * @b: An integer to swap
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
