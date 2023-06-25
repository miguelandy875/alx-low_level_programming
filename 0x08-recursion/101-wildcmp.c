#include "main.h"

/**
 * wildcmp - Compares strings
 * @p2s1: pointer to string par
 * @p2s2: pointer to string par
 * Return: 0
 */

int wildcmp(char *p2s1, char *p2s2)
{
	if (*p2s1 == '\0')
	{
		if (*p2s2 != '\0' && *p2s2 == '*')
		{
			return (wildcmp(p2s1, p2s2 + 1));
		}
		return (*p2s2 == '\0');
	}

	if (*p2s2 == '*')
	{
		return (wildcmp(p2s1 + 1, p2s2) || wildcmp(p2s1, p2s2 + 1));
	}
	else if (*p2s1 == *p2s2)
	{
		return (wildcmp(p2s1 + 1, p2s2 + 1));
	}
	return (0);
}
