#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - function that prints all string character
 * @str: parameter
 *
 * Return: always void.
 */
void puts2(char *str)
{
	int i, j;

	j = 0;
	while (str[j] != '\0')
		j++;
	for (i = 0; i < j; i += 2)
		putchar(str[i]);
	putchar('\n');
}
