#include "monty.h"

void fPstr(stack_t **head, unsigned int counters)
{
	stack_t *h;
	(void)counters;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
			break;
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
