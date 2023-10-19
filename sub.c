#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counters: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counters)
{
	stack_t *aux;
	int sus, nodes;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++){
		aux = aux->next;
	}
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counters);
		fclose(bus.file);
		free(bus.contents);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*head = aux->next;
	free(aux);
}
