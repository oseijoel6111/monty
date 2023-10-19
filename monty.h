#ifndef _MONTY_H_
#define _MONTY_H_
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


typedef struct bus_sender
{
	char *arg;
	FILE *file;
	char *contents;
	int lifi;
}  bus_transport;
extern bus_transport bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *contents);
void fPush(stack_t **head, unsigned int number);
void fPall(stack_t **head, unsigned int number);
void fPint(stack_t **head, unsigned int number);
int execute(char *contents, stack_t **head, unsigned int counters, FILE *file);
void freeStack(stack_t *head);
void f_sub(stack_t **head, unsigned int counters);
void f_div(stack_t **head, unsigned int counters);
void f_mul(stack_t **head, unsigned int counters);
void f_mod(stack_t **head, unsigned int counters);
void f_pchar_(stack_t **head, unsigned int counters);
void fPstr(stack_t **head, unsigned int counters);
void fRotl(stack_t **head, unsigned int counters);
void f_rotr_(stack_t **head, __attribute__((unused)) unsigned int counters);
void addnode(stack_t **head, int n);
void addQueue(stack_t **head, int n);
void fPop(stack_t **head, unsigned int counters);
void fSwap(stack_t **head, unsigned int counters);
void fAdd(stack_t **head, unsigned int counters);
void fNop(stack_t **head, unsigned int counters);
void fQueue(stack_t **head, unsigned int counters);
void fStack(stack_t **head, unsigned int counters);
#endif

