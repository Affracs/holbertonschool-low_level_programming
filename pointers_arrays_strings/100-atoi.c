#include "main.h"

/**
 * Converts a string into an integer
 *
 * Return: always 0 (succes)
 */

int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;

	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i]  >= '0'&& s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
