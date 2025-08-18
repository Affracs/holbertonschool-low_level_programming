#include "main.h"

void puts_half(char *str)
{
	int len = _strlen(str);
	int half = (len / 2);
	
	if  (len % 2 != 0)
	{
		half++;
	}

	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
