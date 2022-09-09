#include "monty.h"

/**
 * print_char_top - print top of the stack in char format
 * @h: head of double list
 *
 */

void print_char_top(const stack_t *h)
{
	if (h == NULL)
		return;

	while (h->next != NULL)
		h = h->next;

	printf("%c\n", h->n);
}
