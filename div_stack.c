#include "monty.h"

/**
 * div_stack - div two top integer of the stack
 * @h: stack to handle
 *
 */

void div_stack(stack_t **h)
{
	stack_t *save = *h;

	while (save->next->next != NULL)
		save = save->next;


	save->n /= save->next->n;
	free(save->next);
	save->next = NULL;
}
