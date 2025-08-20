#include "main.h"

int _strlen(char *s)
{
    int i = 0;

    while (s[i] != '\0')
        i++;

    return i;
}

/**
 * puts_half - prints half of a string with a newline
 * @str: string to print
 *
 * Return: Void (0)
 */

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
