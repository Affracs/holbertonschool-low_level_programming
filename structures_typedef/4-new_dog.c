#include <stdlib.h>
#include "dog.h"

/**
 *
 *
 *
 *
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0')
        len++;

    return (len);
}

/**
 *
 *
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
    return (dest);
}

/**
 *
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;

    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);

    dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
    if (dog->name == NULL)
    {
        free(dog);
        return (NULL);
    }

    dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
    if (dog->owner == NULL)
    {
        free(dog->name);
        free(dog);
        return (NULL);
    }

    _strcpy(dog->name, name);
    _strcpy(dog->owner, owner);
    dog->age = age;

    return (dog);
}
