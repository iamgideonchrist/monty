#include "monty.h"

/**
 * monty_rotr - rotates the stack to the bottom
 * @stack: head pointer of the stack
 * @line_num: line number of the file
 * Return: nothing
 */

void monty_rotr(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	while (temp->next)
		temp = temp->next;

	temp->next = *stack;
	temp->prev->next = NULL;
	temp->prev = NULL;
	(*stack)->prev = temp;
	(*stack) = temp;

	(void)line_num;
}

/**
 * monty_mod - computes the rest of the div of top second and first elements
 * @stack: head pointer of the stack
 * @line_num: line number for the file
 * Return: nothing
 */

void monty_mod(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by 0\n", line_num);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n %= (*stack)->n;
	monty_pop(stack, line_num);
}



/**
 * monty_pchar - prints the ascii value of the char at the top of the stack
 * @stack: head pointer of the stack
 * @line_num: line number for the file
 * Return: nothing
 */

void monty_pchar(stack_t **stack, unsigned int line_num)
{
	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n",
				line_num);
		exit(EXIT_FAILURE);
	}
	if (!(*stack))
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}

/**
 * monty_nop - function that does nothing
 * @stack: head pointer of the stack
 * @line_num: line number for the file
 * Return: nothing
 */

void monty_nop(stack_t **stack, unsigned int line_num)
{
	(void)stack;
	(void)line_num;
}
