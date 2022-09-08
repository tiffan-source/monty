#include "monty.h"

/**
 * swap_stack - swap two top integer of the stack
 * @h: stack to handle
 *
 */

void swap_stack(stack_t **h)
{
	int i_s;
	stack_t *save = *h;

	while (save->next->next != NULL)
		save = save->next;

	i_s = save->n;
	save->n = save->next->n;
	save->next->n = i_s;
}
