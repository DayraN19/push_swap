/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctrl_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastiangranier <bastiangranier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:08:44 by bgranier          #+#    #+#             */
/*   Updated: 2026/01/09 14:17:07 by bastiangran      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ctrl_init(t_ctrl *c)
{
    c->strat = NULL;
    c->count_ra = 0;
    c->count_rb = 0;
    c->count_rr = 0;
    c->count_pb = 0;
    c->count_pa = 0;
    c->count_sa = 0;
    c->count_sb = 0;
    c->count_ss = 0;
    c->count_rra = 0;
    c->count_rrb = 0;
    c->count_rrr = 0;
    c->count_disorder = 0.0;
    c->bench = 0;
    c->first = NULL;
    c->second = NULL;
}
