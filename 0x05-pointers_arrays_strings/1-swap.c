#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swap integer a and b
 * @a: integer to swap
 * @b: interger to swap
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

