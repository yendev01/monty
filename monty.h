#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;



void (*get_func(char *s))(stack_t **stack, unsigned int line_number);
void get_push(stack_t **stack, unsigned int line_number);
void get_pall(stack_t **stack, unsigned int line_num);
void get_pint(stack_t **stack, unsigned int line_num);
void get_pop(stack_t **stack, unsigned int line_num);
void get_swap(stack_t **stack, unsigned int line_num);
void get_add(stack_t **stack, unsigned int line_num);
void get_nop(stack_t **stack, unsigned int line_num);
void get_sub(stack_t **stack, unsigned int line_num);
void get_div(stack_t **stack, unsigned int line_num);
void get_mul(stack_t **stack, unsigned int line_num);
void get_mod(stack_t **stack, unsigned int line_num);
void get_pchar(stack_t **stack, unsigned int line_num);
void get_pstr(stack_t **stack, unsigned int line_num);
void get_rotl(stack_t **stack, unsigned int line_num);
void get_rotr(stack_t **stack, unsigned int line_num);
#endif
