/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastiangranier <bastiangranier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 11:20:00 by bgranier          #+#    #+#             */
/*   Updated: 2025/12/28 22:09:29 by bastiangran      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* void	sb(t_stack_node **b, bool print)
{
	t_stack_node *first;
	t_stack_node *second;

	if (!b || !*b || !(*b)->next)
		return ;

	first = *b;
	second = first->next;

	first->next = second->next;
	second->next = first;
	*b = second;

	if (print)
		ft_printf("sb\n");
}
 */