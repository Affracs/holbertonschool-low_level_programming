#include <stdio.h>
#include "main.h"

/**
 *
 * Main - print the string pointed by char *str with a newline
 *
 * Return - Void (0)
 */
void _puts(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
