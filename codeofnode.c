#include "monty.h"

/**
 * opnod_add - Add a new node to the top of the stack.
 * @stack: Ptr to stack.
 * @value: Value to be added to stack.
 */
void opnod_add(stack_t **stack, int value)
{
stack_t *element = calloc(1, sizeof(stack_t));
if (!element)
{
fprintf(stderr, "Error: calloc failed\n");
exit(EXIT_FAILURE);
}

element->n = value;
element->next = *stack;
element->prev = NULL;

if (*stack != NULL)
{
(*stack)->prev = element;
}

*stack = element;
}

/**
 * opqueu_add - Add a new node to the end of the queue.
 * @stack: Ptr to stack.
 * @value: Value to be added to queue.
 */
void opqueu_add(stack_t **stack, int value)
{
stack_t *elemen, *curren;

curren = *stack;
elemen = calloc(1, sizeof(stack_t));

if (elemen == NULL)
{
fprintf(stderr, "Error: Unable to allocate memory\n");
exit(EXIT_FAILURE);
}
if (curren)
curren->prev = elemen;

elemen->n = value;
elemen->next = *stack;
elemen->prev = NULL;
*stack = elemen;
}
