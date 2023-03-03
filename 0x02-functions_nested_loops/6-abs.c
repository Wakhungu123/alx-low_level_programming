#include "main.h"

/**
 * _abs - compute the absolute value of integer
 * @r: parameter
 *
 * Return: r
 *
 */
int _abs(int r)
{
	int a;

	if (r < 0)
	{
		a = (r * -1);
		return (a);
	}
	return (r);
}
