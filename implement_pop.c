#include "monty.h"
/**
 * fPop - prints the top
 * @head: stack head
 * @counters: line_number
 * Return: no return
*/
void fPop(stack_t **head, unsigned int counters)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counters);
		fclose(bus.file);
		free(bus.contents);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
