#include "monty.h"

/**
 * handle_swap - swap two integer of the stack
 * @stack: stack to control
 * @line: line number
 *
 */

void handle_swap(stack_t **stack, unsigned int line)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short", line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	swap_stack(stack);
}
