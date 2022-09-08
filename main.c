#include "monty.h"

instruction_t main_instruction;

/**
 * gt_hdl - get the handle function to handle opcode
 * @stack: stack to store data
 * @l_nbr: line number of opcode
 *
 * Return: handle function
 */

void (*gt_hdl(stack_t **stack, int l_nbr))(stack_t **stack, unsigned int l_nbr)
{
	char *instruction = NULL;

	instruction = strtok(main_instruction.opcode, " ");

	if (instruction != NULL)
	{
		if (strcmp(instruction, "push") == 0)
			return (&handle_push);
		else if (strcmp(instruction, "pall") == 0)
			return (&handle_pall);
		else if (strcmp(instruction, "pint") == 0)
			return (&handle_pint);
		else if (strcmp(instruction, "pop") == 0)
			return (&handle_pop);

		fprintf(stderr, "L%d: unknown instruction", l_nbr);
		fprintf(stderr, " %s\n", main_instruction.opcode);
		free_stack(*stack);
		exit(EXIT_FAILURE);

	}

	return (&handle_void);
}

/**
 * main -entry point
 * @argc: number of argument
 * @argv: list of argument
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	FILE *monty_fd = NULL;
	char line_instruc[1024];
	int tst_gl, line_nbr = 1;
	stack_t *stack = NULL;


	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	monty_fd = fopen(argv[1], "r");

	if (monty_fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s", argv[1]);
		exit(EXIT_FAILURE);
	}

	tst_gl = _getline(line_instruc, monty_fd, 0);

	while (tst_gl != -1)
	{

		main_instruction.opcode = line_instruc;
		main_instruction.f = gt_hdl(&stack, line_nbr);

		main_instruction.f(&stack, line_nbr);

		tst_gl = _getline(line_instruc, monty_fd, 0);
		line_nbr++;
	}

	free_stack(stack);
	fclose(monty_fd);
	return (0);
}
