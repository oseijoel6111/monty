#include "monty.h"
/**
* freeStack - frees a doubly linked list
* @head: head of the stack
*/
void freeStack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
