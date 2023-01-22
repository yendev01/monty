#include "monty.h"

/**
  * get_pchar - ...
  * @stack:...
  * @line_num: ...
  * Return:...
  */

void get_pchar(stack_t **stack, __attribute__((unused)) unsigned int line_num)
{
	int num;

	if (!*stack)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty", line_num);
		exit(EXIT_FAILURE);
	}

	num = (*stack)->n;
	if (num >= 0 && num <= 255)
	{
		printf("%c\n", num);
	}
	else
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_num);
		exit(EXIT_FAILURE);
	}
}
