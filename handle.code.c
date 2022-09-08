#include "monty.h"

/**
 * handle_code - handle the code define in monty file
 * @stack: stack use to handle integer
 * @l_nbr: number of line where code is define
 *
 */

void handle_code(stack_t **stack, unsigned int l_nbr)
{
	char *instruction = NULL;
	int data_isrt;

	instruction = strtok(main_instruction.opcode, " ");

	if (instruction != NULL)
	{
		if (strcmp(instruction, "push") == 0)
		{
			data_isrt = atoi(strtok(NULL, " "));
			push_stack(stack, data_isrt);
		}
		else if (strcmp(instruction, "pall") == 0)
		{
			print_stack(*stack);
		}
		else
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", l_nbr, main_instruction.opcode);
			exit(EXIT_FAILURE);
		}
	}
}
