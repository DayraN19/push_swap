/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastiangranier <bastiangranier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:17:32 by bgranier          #+#    #+#             */
/*   Updated: 2025/12/28 22:29:57 by bastiangran      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_add_back(t_stack_node **stack, t_stack_node *new)
{
	t_stack_node	*tmp;

	if (!*stack)
	{
		*stack = new;
		return ;
	}
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

void	init_stack_a(t_stack_node **a, char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		stack_add_back(a, new_node(atoi(argv[i])));
		i++;
	}
}
