#include "monty.h"
/**
  *fRotl- rotates the stack to the top
  *@head: stack head
  *@counters: line_number
  *Return: no return
 */
void fRotl(stack_t **head,  __attribute__((unused)) unsigned int counters)
{
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
		return;
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
