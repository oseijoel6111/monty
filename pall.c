#include "monty.h"
/**
 * fPall - prints the stack
 * @head: stack head
 * @counters: no used
 * Return: no return
*/
void fPall(stack_t **head, unsigned int counters)
{
	stack_t *h;
	(void)counters;

	h = *head;
	if (h == NULL){
		return;
	}
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
