#include "push_swap.h"

#define CHUNK_SIZE 45  // plus grand chunk pour 500 nombres

void	sort_500(t_stack_node **a, t_stack_node **b)
{
	int	chunk_min;
	int	chunk_max;

	chunk_min = 0;
	chunk_max = CHUNK_SIZE - 1;
	while (*a)
	{
		while (count_in_range(*a, chunk_min, chunk_max) > 0)
		{
			if ((*a)->index >= chunk_min && (*a)->index <= chunk_max)
			{
				pb(a, b, 1);
				if ((*b)->index < chunk_min + CHUNK_SIZE / 2)
					rb(b, 1);
			}
			else
				ra(a, 1);
		}
		chunk_min += CHUNK_SIZE;
		chunk_max += CHUNK_SIZE;
	}
	push_back_to_a(a, b);
}
