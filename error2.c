#include "monty.h"

/**
 * usage_err - error message for usage error
 *
 * Exit: EXIT FAILURE always
 */
void usage_err(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * f_open_err - error message when file's unable to open
 * @filename: argument for name of file
 *
 * Exit: EXIT_FAILURE always
 */
void f_open_err(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}

/**
 * invalid_op_err - error message for file that contains invalid instruction
 * @line_num: error line number in Monty bytecode
 * @opcode: opcode where error occurred
 *
 * Exit: EXIT_FAILURE always
 */
void invalid_op_err(char *opcode, unsigned int line_num)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line_num, opcode);
	exit(EXIT_FAILURE);
}
