#include "monty.h"

/**
  * _free - frees
  * Return: void(nothing)
  */


void _free(void)
{
	stack_t *node;
	stack_t *temp;

	while (node)
	{
		temp = node->next;
		free(node);
		node = temp;
	}
}
