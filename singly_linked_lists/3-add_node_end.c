#include "lists.h"
#include <stdlib.h>
#include <string.h>

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *i;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	i = *head;
	while (i->next != NULL)
		i = i->next;

	i->next = new;
	return (new);
}
