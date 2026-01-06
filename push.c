/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastiangranier <bastiangranier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:19:03 by bgranier          #+#    #+#             */
/*   Updated: 2025/12/28 22:18:05 by bastiangran      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "push_swap.h"

void	ft_push(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_stack_node	*tmp;

	if (*stack_a == NULL)
		return ;
	else if (*stack_a != NULL)
	{
		tmp = (*stack_a)->next;
		(*stack_a)->next = *stack_b;
		*stack_b = *stack_a;
		*stack_a = tmp;
	}
}

void	pa(t_stack_node **stack_a, t_stack_node **stack_b, bool print)
{
	ft_push(stack_b, stack_a);
	if (print)
		ft_printf("pa\n");
}

void	pb(t_stack_node **stack_a, t_stack_node **stack_b, bool  print)
{
	ft_push(stack_a, stack_b);
	if (print)
		ft_printf("pb\n");
} */