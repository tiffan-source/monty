#include "monty.h"

/**
 * handle_div - div two integer of the stack
 * @stack: stack to control
 * @line: line number
 *
 */

void handle_div(stack_t **stack, unsigned int line)
{
	stack_t *save;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	save = *stack;

	while (save->next != NULL)
		save = save->next;

	if (save->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	div_stack(stack);
}
