#include <stdio.h>
#include "main.h"

/**
 *
 * Main - change value of int "x" to 98 using int "*n"
 *
 * Return - Void (0)
 */
void reset_to_98(int *n)
{
	int x;
	n = &x;
	*n = 98;
}
