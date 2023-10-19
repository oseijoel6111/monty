#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @counters: line_number
 * Return: no return
*/
void f_mul(stack_t **head, unsigned int counters)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counters);
		fclose(bus.file);
		free(bus.contents);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
