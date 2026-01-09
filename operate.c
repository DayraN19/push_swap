#include "push_swap.h"

t_ctrl	*c;

void	sa(t_stack_node **a, int print)
{
	t_stack_node	*first;
	t_stack_node	*second;

	if (!a || !*a || !(*a)->next)
		return ;
	first = *a;
	second = (*a)->next;
	first->next = second->next;
	second->next = first;
	*a = second;
	if (print)
		ft_printf("sa\n");
	c->count_sa++;
}

void	sb(t_stack_node **b, int print)
{
	t_stack_node	*first;
	t_stack_node	*second;

	if (!b || !*b || !(*b)->next)
		return ;
	first = *b;
	second = (*b)->next;
	first->next = second->next;
	second->next = first;
	*b = second;
	if (print)
		ft_printf("sb\n");
	c->count_sb++;
}

void	pa(t_stack_node **a, t_stack_node **b, int print)
{
	t_stack_node	*tmp;

	if (!b || !*b)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	if (print)
		ft_printf("pa\n");
	c->count_pa++;
}

void	pb(t_stack_node **a, t_stack_node **b, int print)
{
	t_stack_node	*tmp;

	if (!a || !*a)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	if (print)
		ft_printf("pb\n");
	c->count_pb++;	
}

void	ra(t_stack_node **a, int print)
{
	t_stack_node	*first;
	t_stack_node	*tmp;

	if (!a || !*a || !(*a)->next)
		return ;
	first = *a;
	*a = (*a)->next;
	first->next = NULL;
	tmp = *a;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = first;
	if (print)
		ft_printf("ra\n");
	c->count_ra++;
}

void	rb(t_stack_node **b, int print)
{
	t_stack_node	*first;
	t_stack_node	*tmp;

	if (!b || !*b || !(*b)->next)
		return ;
	first = *b;
	*b = (*b)->next;
	first->next = NULL;
	tmp = *b;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = first;
	if (print)
		ft_printf("rb\n");
	c->count_rb++;
}

void	rra(t_stack_node **a, int print)
{
	t_stack_node	*prev;
	t_stack_node	*last;

	if (!a || !*a || !(*a)->next)
		return ;
	prev = NULL;
	last = *a;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *a;
	*a = last;
	if (print)
		ft_printf("rra\n");
	c->count_rra++;
}

void	rrb(t_stack_node **b, int print)
{
	t_stack_node	*prev;
	t_stack_node	*last;

	if (!b || !*b || !(*b)->next)
		return ;
	prev = NULL;
	last = *b;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *b;
	*b = last;
	if (print)
		ft_printf("rrb\n");
	c->count_rrb++;
}

void	rrr(t_stack_node **a, t_stack_node **b, int print)
{
	rra(a, 0);
	rrb(b, 0);
	if (print)
		ft_printf("rrr\n");
	c->count_rrr++;
}
