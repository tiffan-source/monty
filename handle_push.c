#include "monty.h"

void handle_push(stack_t **stack, unsigned int line)
{
	char *test;

	test = strtok(NULL , " ");

	if (test == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line);
		exit(EXIT_FAILURE);
	}

	push_stack(stack, atoi(test));
}
