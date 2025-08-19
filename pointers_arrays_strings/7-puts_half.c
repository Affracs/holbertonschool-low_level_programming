#include "main.h"

void puts_half(char *str)
{
	int len = _strlen(str);
	int half = (len + 1) / 2;
	
	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
