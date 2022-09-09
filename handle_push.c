#include "monty.h"

/**
 * _strlen - get the length of string
 * @str: string
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	if (str != NULL && *str == '\0')
		return (0);

	return (1 + _strlen(str + 1));
}

/**
 * check_number - check if string is a number
 * @str: string to check
 * @index: index of char
 *
 * Return: 0 for success -1 else
 */

int check_number(char *str, int index)
{
	if (str == NULL)
		return (-1);

	if ((*str >= '0' && *str <= '9') || (*str == '-' && index == 0))
		return (check_number(str + 1, index + 1));
	else if (*str == '\0')
		return (0);
	else
		return (-1);
}

/**
 * handle_push - push data on the stack
 * @stack: stack of data
 * @line: line of opcode
 *
 */

void handle_push(stack_t **stack, unsigned int line)
{
	char *test;

	test = strtok(NULL, " ");

	if (test == NULL || check_number(test, 0) == -1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	push_stack(stack, atoi(test));
}
