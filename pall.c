#include "monty.h"

/**
  * get_pall - ...
  * @stack:...
  * @line_num: ...
  * Return:...
  */

void get_pall(stack_t **stack, __attribute__((unused)) unsigned int line_num)
{
	stack_t *t1 = *stack;

	while (t1)
	{
		printf("%d\n", t1->n);
		t1 = t1->next;
	}
}
