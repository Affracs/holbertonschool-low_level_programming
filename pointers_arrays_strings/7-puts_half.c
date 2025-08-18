#include "main.h"

void puts_half(char *str)
{
	int len = _strlen(str);
	int half = (len / 2);
	
	while (len != half)
	{
		_putchar(str[len]);
		len--;
	}
	_putchar('\n');
}
