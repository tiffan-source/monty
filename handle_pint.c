#include "monty.h"

/**
 * handle_pint - handle pint function
 * @stack: stack of list to performe
 * @line_number: number of line
 *
 */

void handle_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty", line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	print_top(*stack);
}
