#include "monty.h"

/**
 * handle_sub - sub two integer of the stack
 * @stack: stack to control
 * @line: line number
 *
 */

void handle_sub(stack_t **stack, unsigned int line)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	sub_stack(stack);
}
