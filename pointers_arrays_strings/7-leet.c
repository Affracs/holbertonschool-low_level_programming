#include "main.h"

char *leet(char *str)
{
    int i = 0, j;
    char letters[] = "aAeEoOtTlL";
    char leet[]    = "4433007711";

    while (str[i] != '\0')
    {
        for (j = 0; j < 10; j++)
        {
            if (str[i] == letters[j])
            {
                str[i] = leet[j];
                break;
            }
        }
        i++;
    }

    return (str);
}
