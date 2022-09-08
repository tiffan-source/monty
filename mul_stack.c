#include "monty.h"

/**
 * mul_stack - mul two top integer of the stack
 * @h: stack to handle
 *
 */

void add_stack(stack_t **h)
{
	stack_t *save = *h;

	while (save->next->next != NULL)
		save = save->next;


	save->n *= save->next->n;
	free(save->next);
	save->next = NULL;
}
