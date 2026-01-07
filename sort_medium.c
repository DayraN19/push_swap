/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 15:54:28 by bgranier          #+#    #+#             */
/*   Updated: 2026/01/06 15:56:25 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_medium(t_stack_node **a, t_stack_node **b)
{
    int size = stack_size(*a);
    int chunk = (int)ft_sqrt(size);
    int i;

    while (*a)
    {
        i = 0;
        while (i < chunk && *a)
        {
            pb(a, b, true);  // push vers b chunk par chunk
            i++;
        }
        while (*b)
            pa(a, b, true);  // récupérer tous les éléments
    }
}
