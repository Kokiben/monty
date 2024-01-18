#include "monty.h"

/**
 * _freesta - Frees memory allocated for stack.
 * @stack: ptr to stack.
 */
void _freesta(stack_t *stack)
{
stack_t *current = stack;
stack_t *next;

while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
}
