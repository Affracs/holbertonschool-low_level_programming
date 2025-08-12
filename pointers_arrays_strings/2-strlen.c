#include <stdio.h>
#include "main.h"

/**
 *
 * Main - goes over each character in char*s using [i] to calculate *s length
 *
 * Return - int (i as length of *s)
 */
int _strlen(char *s)
{
	int i;
	
	while (s[i] != '\0')
		i++;

	return i;
}
