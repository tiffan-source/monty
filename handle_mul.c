#include "monty.h"

/**
 * handle_mul - mul two integer of the stack
 * @stack: stack to control
 * @line: line number
 *
 */

void handle_mul(stack_t **stack, unsigned int line)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	mul_stack(stack);
}
