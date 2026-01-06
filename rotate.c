/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastiangranier <bastiangranier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 15:42:19 by bgranier          #+#    #+#             */
/*   Updated: 2025/12/28 22:29:16 by bastiangran      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "push_swap.h"

void	ft_rotate(t_stack_node **stack)
{
	t_stack_node	*tmp;
	t_stack_node	*tail;

	tmp = *stack;
	*stack = (*stack)->next;
	tail = get_stack_bottom(*stack);
	tmp->next = NULL;
	tail->next = tmp;
}

void	ra(t_stack_node **stack_a, bool print)
{
	ft_rotate(stack_a);
	if (print)
		ft_printf("ra\n");
}

void	rb(t_stack_node **stack_b, bool print)
{
	ft_rotate(stack_b);
	if (print)
		ft_printf("rb\n");
}

void	rr(t_stack_node **stack_a, t_stack_node **stack_b, bool print)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	if (print)
		ft_printf("rr\n");
}*/