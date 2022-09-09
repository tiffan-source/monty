#include "monty.h"

/**
 * handle_pchar - handle pchar function
 * @stack: stack of list to performe
 * @line_number: number of line
 *
 */

void handle_pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *save;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty", line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	save = *stack;

	while (save->next != NULL)
		save = save->next;

	if (save->n < 0 || save->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range", line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	print_char_top(*stack);
}
