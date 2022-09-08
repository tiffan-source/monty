#include "monty.h"

/**
 * push_stack - adds a new node at the beginning of a dlistint_t list
 * @head: head of the list
 * @n: intger to insert
 *
 * Return: address of the new element or NULL if it failed
 */
stack_t *push_stack(stack_t **head, const int n)
{
	stack_t *new_node = NULL, *save;

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	save = *head;
	while (save->next != NULL)
		save = save->next;

	new_node->prev = save;
	save->next = new_node;

	return (new_node);
}
