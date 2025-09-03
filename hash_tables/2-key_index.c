#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hval;

	if (key == NULL || size == 0)
		return (0);

	hval = hash_djb2(key);
	return (hval % size);
}
