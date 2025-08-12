#include <stdio.h>
#include "main.h"

/**
 * _puts(char *str) - prints a string str with a newline to stdout
 * Return - Void (0)
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
