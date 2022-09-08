#include "monty.h"

/**
 * sub_stack - sub two top integer of the stack
 * @h: stack to handle
 *
 */

void sub_stack(stack_t **h)
{
	stack_t *save = *h;

	while (save->next->next != NULL)
		save = save->next;


	save->n -= save->next->n;
	free(save->next);
	save->next = NULL;
}
