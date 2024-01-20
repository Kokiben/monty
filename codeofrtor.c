#include "monty.h"

/**
 * rotr_op - Rotates the stack to the bottom.
 * @stack: Ptr to stack.
 * @line_number: Line number in Monty file.
 */
void rotr_op(stack_t **stack, unsigned int line_number)
{
(void)line_number;

if (*stack != NULL && (*stack)->next != NULL)
{
stack_t *last_nod = *stack;

while (last_nod->next != NULL)
{
last_nod = last_nod->next;
}

last_nod->next = *stack;
(*stack)->prev = last_nod;
*stack = last_nod->next;
last_nod->prev->next = NULL;
last_nod->prev = NULL;
}
}
