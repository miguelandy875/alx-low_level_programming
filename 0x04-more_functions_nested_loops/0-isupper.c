#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: the character to be tested
 *
 * Return:  1 for uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
