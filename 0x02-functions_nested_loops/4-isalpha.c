#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: character to be evaluated
 *
 * Return: 1 or 0
 *
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
