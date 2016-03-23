#ifndef TEST_H
# define TEST_H


typedef struct s_stack
{
	int val;
	struct t_stack *next;
	struct t_stack *prev;

}				t_stack;

// typedef struct t_stack stack;

#endif