#include "monty.h"

/**
 * pop_stack - remove top of stack
 * @h: stack to perform
 *
 */

void pop_stack(stack_t **h)
{
	stack_t *save;

	if ((*h)->next == NULL)
	{
		free(*h);
		*h = NULL;
		return;
	}

	save = *h;

	while (save->next->next != NULL)
		save = save->next;

	free(save->next);
	save->next = NULL;
}
