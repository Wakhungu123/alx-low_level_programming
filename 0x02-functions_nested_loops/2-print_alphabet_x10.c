#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet in lowercase
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char mn;

	int i = 0;

	while (i < 10)
	{
		for (mn = 'a'; mn <= 'z'; mn++)
		{
			_putchar(mn);
		}
	_putchar('\n');
	i++;
	}
}
