#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string pointed to in reverse with a new line.
 * @s: Pointer to the string being printed.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	while (s[1] != 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
