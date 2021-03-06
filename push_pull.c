#include "monty.h"
int global;
/**
 *_push - this is the main function to process all functions
 *
 * @stack: stack that receives
 * @line_number: Number that receives
 *Return: 0
 */

void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));

	(void)line_number;
	if (!new)
		return;
	new->n = global;
	new->next = *stack;
	new->prev = NULL;
	if (*stack)
		(*stack)->prev = new;
	*stack = new;
}

/**
 *_pall - this is the main function to process all functions
 *
 * @stack: stack that receives
 * @line_number: Number that receives
 *Return: 0
 */

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *h;

	(void)line_number;
	h = *stack;
	if (!h)
		return;
	while (h)
	{
		printf("%d \n", h->n);
		h = h->next;
	}
}
