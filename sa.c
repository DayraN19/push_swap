/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastiangranier <bastiangranier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:15:37 by bgranier          #+#    #+#             */
/*   Updated: 2025/12/28 22:09:16 by bastiangran      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* void    sa(t_stack_node **a, bool print)
{
	t_stack_node *first;
	t_stack_node *second;

	if (!a || !*a || !(*a)->next)
		return ;

	first = *a;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*a = second;

	if (print)
		ft_printf("sa\n");
}
 */