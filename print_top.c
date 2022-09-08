#include "monty.h"

/**
 * print_top - print top of the stack
 * @h: head of double list
 *
 */

void print_top(const stack_t *h)
{
	if (h == NULL)
		return;

	while (h->next != NULL)
		h = h->next;

	printf("%d\n", h->n);
}
