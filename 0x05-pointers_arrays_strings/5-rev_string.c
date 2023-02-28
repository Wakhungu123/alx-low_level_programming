#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reversing string
 * @s: parameter
 *
 * Return: always void.
 */
void rev_string(char *s)
{
	int c, d;
	char a;

	d = 0;
	c = 0;
	while (s[d++])
		c++;
	for (d = c - 1; d >= c / 2; d--)
	{
		a = s[d];
		s[d] = s[c - d - 1];
		s[c - d - 1] = a;
	}
}
