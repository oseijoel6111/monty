#include "monty.h"
/**
 * fPush - add node to the stack
 * @head: stack head
 * @counters: line_number
 * Return: no return
*/
void fPush(stack_t **head, unsigned int counters)
{
	int n, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counters);
			fclose(bus.file);
			free(bus.contents);
			freeStack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counters);
		fclose(bus.file);
		free(bus.contents);
		freeStack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, n);
	else
		addQueue(head, n);
}
