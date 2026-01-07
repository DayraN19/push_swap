#include "push_swap.h"

void    sort_simple(t_stack_node **a, t_stack_node **b)
{
	int size;
	double  i;

	size = stack_size(*a);
	i = compute_disorder(*a);
	if (size <= 1)
		return ;
	if (i == 0)
	{
		return ;
	}
	while (*a)
	{
		move_min_to_top(a);
		pb(a, b, true);
	}
	while (*b)
	{
		pa(a, b, true);
	}
}
