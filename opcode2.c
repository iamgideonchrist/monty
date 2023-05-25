#include "monty.h"

/**
 * monty_sub - function that substract the top elment from the second element
 * @stack: head pointer of the stack
 * @line_num: line number for the file
 * Return: nothing
 */

void monty_sub(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL || (*stack)->next == NULL)
		sub_err(line_num);

	(*stack)->next->n -= (*stack)->n;
	monty_pop(stack, line_num);
}

/**
 * monty_div - divides the second top element with the top element of the stack
 * @stack: head pointer of the stack
 * @line_num: line number for the file
 * Return: nothing
 */

void monty_div(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by 0\n", line_num);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n /= (*stack)->n;
	monty_pop(stack, line_num);
}

/**
 * monty_pall - function that prints opcode element on the stack from top down
 * @stack: the stack
 * @line_num: opcode line number
 * Return: nothing
 */

void monty_pall(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack;

	while (temp != 0)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	(void)line_num;
}


/**
 * monty_pint - function that prints opcode element at the top of the stack
 * @stack: the stack
 * @line_num: opcode line number
 * Return: nothing
 */

void monty_pint(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL)
		pint_err(line_num);

	printf("%d\n", (*stack)->n);
}
