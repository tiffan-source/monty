#include "monty.h"

/**
 * handle_pall - print data on the stack
 * @stack: stack of data
 * @line: line of opcode
 *
 */

void handle_pall(stack_t **stack, __attribute__((unused)) unsigned int line)
{
	print_stack(*stack);
}
