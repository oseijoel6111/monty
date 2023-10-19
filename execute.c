#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @counters: line_counters
* @file: poiner to monty file
* @contents: line contents
* Return: no return
*/
int execute(char *contents, stack_t **stack, unsigned int counters, FILE *file)
{
	instruction_t opst[] = {
				{"push", fPush}, {"pall", fPall}, {"pint", fPint},
				{"pop", fPop},
				{"swap", fSwap},
				{"add", fAdd},
				{"nop", fNop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar_},
				{"pstr", fPstr},
				{"rotl", fRotl},
				{"rotr", f_rotr_},
				{"queue", fQueue},
				{"stack", fStack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(contents, " \n\t");
	if (op && op[0] == '#'){
		return (0);
	}
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counters);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counters, op);
		fclose(file);
		free(contents);
		freeStack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
