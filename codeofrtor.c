#include "monty.h"

/**
 * rotr_op - Rotates the stack to the bottom.
 * @stack: Ptr to stack.
 * @line_number: Line number in Monty file.
 */
void rotr_op(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
stack_t *las_nod, *bot;

bot = *stack;

if (bot == NULL || bot->next == NULL)
{
return;
}

while (bot->next)
{
bot = bot->next;
}

las_nod = *stack;
bot->next = las_nod;
las_nod->prev = bot->prev;
bot->prev->next = NULL;
bot->prev = NULL;
*stack = bot;
}
