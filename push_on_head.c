#include "monty.h"

/**
 * push_on_head - adds a new node at the beginning of a dlistint_t list
 * @head: head of the list
 * @n: intger to insert
 *
 * Return: address of the new element or NULL if it failed
 */

stack_t *push_on_head(stack_t **head, const int n)
{
	stack_t *new_node = NULL;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
