#include "monty.h"

/**
 * print_stack - print all the elemets of a dlist
 * @h: head of double list
 *
 */

void print_stack(const stack_t *h)
{
	if (h == NULL)
		return;

	print_stack(h->next);
	printf("%d\n", h->n);
}
