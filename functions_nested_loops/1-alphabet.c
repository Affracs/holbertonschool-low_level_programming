#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Make the alphabet
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
