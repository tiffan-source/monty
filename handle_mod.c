#include "monty.h"

/**
 * handle_add - add two integer of the stack
 * @stack: stack to control
 * @line: line number
 *
 */

void handle_add(stack_t **stack, unsigned int line)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	add_stack(stack);
}
