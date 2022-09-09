#include "monty.h"

/**
 * print_str_top - print stack
 * @h: head of double list
 *
 */

void print_str_top(const stack_t *h)
{
	while (h->next != NULL)
		h = h->next;

	while (h != NULL && (h->n > 0 && h->n <= 127))
	{
		printf("%c", h->n);
		h = h->prev;
	}
	printf("\n");
}
