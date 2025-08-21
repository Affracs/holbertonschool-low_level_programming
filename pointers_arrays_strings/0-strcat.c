#include <stdio.h>


char *_strcat(char *dest, char *src)
{
	int i = dest[0];
	int j = src[0];

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
	}

	return (dest);
}	
