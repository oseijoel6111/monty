#include "monty.h"
/**
 * f_pcharacter_ - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @counters: line_number
 * Return: no return
*/
void f_pchar_(stack_t **head, unsigned int counters)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counters);
		fclose(bus.file);
		free(bus.contents);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counters);
		fclose(bus.file);
		free(bus.contents);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
