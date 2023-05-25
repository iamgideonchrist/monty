#include "monty.h"

/**
 * pint_err - error message when stack is empty and can't pint
 * @line_num: line number where error occured
 *
 * Exit: EXIT_FAILURE always
 */

void pint_err(unsigned int line_num)
{
	fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
	exit(EXIT_FAILURE);
}

/**
 * push_err - error message if push arg is not an integer or no arg given
 * @line_num: line number where error occured
 *
 * Exit: EXIT_FAILURE always
 */

void push_err(unsigned int line_num)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_num);
	exit(EXIT_FAILURE);
}

/**
 * malloc_err - error message when you can't malloc anymore
 *
 * Exit: EXIT_FAILURE always
 */

void malloc_err(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
