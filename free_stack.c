#include "monty.h"

/**
 * free_stack - print all the elemets of a dlist
 * @h: head of double list
 *
 */

void free_stack(stack_t *h)
{
	if (h != NULL)
	{
		free_stack(h->next);
		free(h);
	}
	return;

}
