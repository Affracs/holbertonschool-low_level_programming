#include <stdio.h>
#include "main.h"

/**
 *
 * Main - Swap value of int "a*" and int "b*"
 *
 * Return - Void (0)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
