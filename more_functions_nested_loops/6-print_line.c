#include "main.h"

/**
 * print_line - print a line with n characters
 * @n: numbers of times that prints line
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
