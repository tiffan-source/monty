#include "monty.h"

/**
 * handle_pstr - handle pstr function
 * @stack: stack of list to performe
 * @line_number: number of line
 *
 */

void handle_pstr(stack_t **stack, UNUSED unsigned int line_number)
{
	print_str_top(*stack);
}
