#include <stdlib.h>
#include "dog.h"

/**
 *
 *
 */
void free_dog(dog_t *d)
{
    if (d == NULL)
        return;

    free(d->name);
    free(d->owner);
    free(d);
}
