#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverse the characters of a string.
 * @s: pointer to the string to be reversed.
 *
 * Return: void.
 */

void rev_string(char *s)
{
	int temp;
	int i = 0;
	int j = 0;

	while (s[j] != '\0')
		j++;

	j--;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}
