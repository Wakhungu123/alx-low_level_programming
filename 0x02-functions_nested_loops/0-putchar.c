#include "putchar.h"

/**
 * main - prints _putchar as a message.
 *
 * Return: Always return 0 (success)
 *
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};

	int c, size;

	size = sizeof(str) / sizeof(int);
	for (c = 0; c < size; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
	return (0);
}
