#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	char *concat;

	if (s1)
		while (s1[len1])
			len1++;
	if (s2)
		while (s2[len2])
			len2++;

	if (n >= len2)
		n = len2;

	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (!concat)
		return (NULL);

	while (i < len1)
	{
		concat[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		concat[i + j] = s2[j];
		j++;
	}
	concat[i + j] = '\0';

	return (concat);
}
