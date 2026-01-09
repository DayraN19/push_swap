/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:10:08 by bgranier          #+#    #+#             */
/*   Updated: 2026/01/08 13:43:21 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <math.h>


typedef struct s_ctrl {
    char    *strat;
    int     count_ra;
    int     bench;
    t_stack_node  *first;
    t_stack_node *last;
}   t_ctrl;


/* ===== init ===== */
t_stack_node	*new_node(int value);
void			stack_add_back(t_stack_node **stack, t_stack_node *new);
void			init_stack_a(t_stack_node **a, char **argv);
void			index_stack(t_stack_node *a);

/* ===== stack utils ===== */
int				stack_size(t_stack_node *stack);
int				is_sorted(t_stack_node *stack);
void			free_stack(t_stack_node *stack);
void			print_stack(t_stack_node *stack);
t_stack_node	*get_stack_bottom(t_stack_node *stack);
t_stack_node	*get_stack_before_bottom(t_stack_node *stack);

/* ===== operations ===== */
void			sa(t_stack_node **a, int print);
void			sb(t_stack_node **b, int print);
void			pa(t_stack_node **a, t_stack_node **b, int print);
void			pb(t_stack_node **a, t_stack_node **b, int print);
void			ra(t_stack_node **a, int print);
void			rb(t_stack_node **b, int print);
void			rra(t_stack_node **a, int print);
void			rrb(t_stack_node **b, int print);
void		rrr(t_stack_node **stack_a, t_stack_node **stack_b, int print);

/* ===== sort ===== */

void			error_exit(void);
int				get_max_bits(t_stack_node *a);
void			sort_chunks(t_stack_node **a, t_stack_node **b, int chunk);
void			move_min_to_top(t_stack_node **a);
void			select_strategy(char *flag, t_stack_node **a, t_stack_node **b);
void			sort_nearly_sorted(t_stack_node **a, t_stack_node **b);
void			sort_adaptive(t_stack_node **a, t_stack_node **b);
void			sort_complex(t_stack_node **a, t_stack_node **b);
void			sort_medium(t_stack_node **a, t_stack_node **b);
void			sort_simple(t_stack_node **a, t_stack_node **b);
double			compute_disorder(t_stack_node *a);
void            dispatch_sort(t_stack_node **a, t_stack_node **b, char *strategy);
void			sort_3(t_stack_node **a);
void			sort_100(t_stack_node **a, t_stack_node **b);
void			sort_500(t_stack_node **a, t_stack_node **b);
void			ctrl_init(t_ctrl *c);
int	            print_bench(t_ctrl *ctrl);


/* ===== sort utils ===== */
int				ft_sqrt(int n);
int				ft_strcmp(char *s1, char *s2);
int				count_in_range(t_stack_node *a, int min, int max);
int				get_max_index_pos(t_stack_node *b);
void			push_back_to_a(t_stack_node **a, t_stack_node **b);

#endif
