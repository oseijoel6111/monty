#include "monty.h"
/**
 * fPint - prints the top
 * @head: stack head
 * @counters: line_number
 * Return: no return
*/
void fPint(stack_t **head, unsigned int counters)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counters);
		fclose(bus.file);
		free(bus.contents);
		freeStack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
