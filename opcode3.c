#include "monty.h"

/**
 * monty_add - function that adds the top two elements of the stack
 * @stack: head pointer of the stack
 * @line_num: line number for the file
 * Return: nothing
 */

void monty_add(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL || (*stack)->next == NULL)
		add_err(line_num);

	(*stack)->next->n += (*stack)->n;
	monty_pop(stack, line_num);
}

/**
 * monty_stack - function that checks if the stack is in stack mode
 * @stack: head pointer of the stack
 * @line_num: line number of the file
 * Return: nothing
 */

void monty_stack(stack_t **stack, unsigned int line_num)
{
	(void)stack;
	(void)line_num;
	bus.lifi = 0;
}


/**
 * monty_pstr - prints the ascii val of string starting at the top of the stack
 * @stack: head pointer of the stack
 * @line_num: line number of the file
 * Return: nothing
 */

void monty_pstr(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack;

	while (temp)
	{
		if (temp->n == 0)
			break;
		if (temp->n > 127 || temp->n < 0)
			break;
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
	(void)line_num;
}


/**
 * monty_rotl - rotates the stack to the top
 * @stack: head pointer of the stack
 * @line_num: line number of the file
 * Return: nothing
 */

void monty_rotl(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	while (temp->next != 0)
		temp = temp->next;

	temp->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	temp->next->next->prev = temp;
	temp->next->next = NULL;

	(void)line_num;
}
