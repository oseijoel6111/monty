#include "monty.h"

void f_rotr_(stack_t **head, __attribute__((unused)) unsigned int counters)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
		return;
	while (copy->next)
		copy = copy->next;
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
