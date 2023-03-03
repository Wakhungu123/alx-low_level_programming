#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: Always return 0
 *
 */
void print_alphabet(void)
{
	char a, z;

	a = 97;
	z = 122;
	while (a <= z)
	printf("%d", a);
	a++;
}
