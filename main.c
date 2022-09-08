#include "monty.h"

instruction_t main_instruction;

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
	char *line_instruc = NULL;
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
		fprintf(stderr, "ERROR: Can't open file %s", argv[1]);
		exit(EXIT_FAILURE);
	}

	tst_gl = _getline(&line_instruc, monty_fd, 0);

	while (tst_gl != -1)
	{
		main_instruction.opcode = line_instruc;
		main_instruction.f = &handle_code;

		main_instruction.f(&stack, line_nbr);

		free(line_instruc);
		tst_gl = _getline(&line_instruc, monty_fd, 0);
		line_nbr++;
	}

	if (line_instruc != NULL)
		free(line_instruc);

	free_stack(stack);
	fclose(monty_fd);
	return (0);
}
