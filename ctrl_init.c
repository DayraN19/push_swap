/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctrl_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:08:44 by bgranier          #+#    #+#             */
/*   Updated: 2026/01/07 14:08:47 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ctrl_init(t_ctrl *c)
{
    c->strat = NULL;
    c->count_ra = 0;
    c->bench = 0;
    c->first = NULL;
    c->last = NULL;
}
