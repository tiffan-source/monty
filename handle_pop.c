#include "monty.h"

/**
 * handle_pop - handle pop stack
 * @stack: stack to control
 * @line: line number
 *
 */

void handle_pop(stack_t **stack, unsigned int line)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	pop_stack(stack);
}
