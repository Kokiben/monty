#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <unistd.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/*
 * struct transport_s - Represents transport information.
 * @status:  Integer representing the status.
 *          Typically used for indicating the status of a transport operation
 * @opcode: String representing the opcode.
 *          Holds the opcode associated with a Monty instruction.
 * @payload: String representing the payload.
 *           Holds the payload data associated with a Monty instruction.
 * @data:  File pointer representing additional data.
 *        Used for file-related operations or additional data storage.
 *  Description: This structure encapsulates information related to the transport
 * of Monty instructions, including status, opcode, payload, and additional data.
 *
 */
typedef struct transport_s
{
int status;
char *opcode;
char *payload;
FILE *data;
} transport_t;
extern transport_t trans;

void code_swap(stack_t **stack, unsigned int line_number);
void code_add(stack_t **stack, unsigned int line_number);
void code_nop(stack_t **stack, unsigned int line_number);
void code_pint(stack_t **stack, unsigned int line_number);
void code_pop(stack_t **stack, unsigned int line_number);
void code_push(stack_t **stack, unsigned int line_number);
void code_pall(stack_t **stack, unsigned int line_number);



void code_pchar(stack_t **stack, unsigned int line_number);
void code_pstr(stack_t **stack, unsigned int line_number);
void code_sub(stack_t **stack, unsigned int line_number);
void code_div(stack_t **stack, unsigned int line_number);
void code_mod(stack_t **stack, unsigned int line_number);
void code_mul(stack_t **stack, unsigned int line_number);

void _freesta(stack_t *stack);
int code_execute(char *, stack_t **, unsigned int, FILE *);


void rotl_op(stack_t **stack, unsigned int line_number);
void rotr_op(stack_t **stack, unsigned int line_number);
void stack_op(stack_t **stack, unsigned int line_number);
void queue_op(stack_t **stack, unsigned int line_number);

void op_adderr(unsigned int line_number);

void opnod_add(stack_t **, int);
void opqueu_add(stack_t **, int);
char  *code_clean(char *opcode);
ssize_t in_get(char **, int);
char *resize_memo(char *, unsigned int, unsigned int);

#endif
