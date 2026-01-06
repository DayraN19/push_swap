#include "push_swap.h"
#define CHUNK_SIZE 20

int	count_in_range(t_stack_node *a, int min, int max)
{
	int	count;

	count = 0;
	while (a)
	{
		if (a->index >= min && a->index <= max)
			count++;
		a = a->next;
	}
	return (count);
}

int	get_max_index_pos(t_stack_node *b)
{
	t_stack_node	*tmp;
	int				max;
	int				pos;
	int				i;

	tmp = b;
	max = b->index;
	pos = 0;
	i = 0;
	while (tmp)
	{
		if (tmp->index > max)
		{
			max = tmp->index;
			pos = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (pos);
}

void	push_back_to_a(t_stack_node **a, t_stack_node **b)
{
	int	pos;
	int	size;
	int	i;

	while (*b)
	{
		size = stack_size(*b);
		pos = get_max_index_pos(*b);
		if (pos <= size / 2)
		{
			i = 0;
			while (i < pos)
			{
				rb(b, 1);
				i++;
			}
		}
		else
		{
			i = 0;
			while (i < size - pos)
			{
				rrb(b, 1);
				i++;
			}
		}
		pa(a, b, 1);
	}
}

void	sort_100(t_stack_node **a, t_stack_node **b)
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
