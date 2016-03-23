#include <stdio.h>
#include <stdlib.h>
#include "my_first_ring_list.h"


void my_lstadd_back(t_stack *alst, int new_val)
{
	t_stack *new;
	new = (t_stack *)malloc(sizeof(t_stack*));

	new->val = new_val;

	new->prev = alst;
	new->next = alst->next;

	alst->next->prev = new;
	alst->prev = new;
}

// void my_lstadd_prev(t_stack *alst, int new_val)
// {
// 	t_stack *new;
// 	new = (t_stack *)malloc(sizeof(t_stack));
// 	new->val = new_val;

// 	if (alst != NULL && new != NULL)
// 	{
// 		new->prev = alst->prev;
// 		new->next = alst;

// 		alst->prev->next = new;
//         alst->prev = new;
		
// 	}
// }

int main(int ac, char **av)
{
	t_stack *racine;
	t_stack *tmp;
	int i;

	i = 0;
	racine->val = 0;
	racine->next = racine;
	racine->prev = racine;
	tmp = racine;
	while( i < 3)
	{
		my_lstadd_back(racine, i);
		i++;
	}
	while(tmp->next && tmp != racine)
	{
		printf("%d\n", tmp->val);
		tmp = tmp->next;
	}
	return(0);
}
