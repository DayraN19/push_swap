/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgranier <bgranier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:09:55 by bgranier          #+#    #+#             */
/*   Updated: 2026/01/06 16:18:08 by bgranier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack_node    *a = NULL;
    t_stack_node    *b = NULL;

    if (argc < 2)
        return (0);

    init_stack_a(&a, &argv[1]);
    index_stack(a);

    if (argc > 1 && argv[1])
    {
        if (ft_strcmp(argv[1], "--simple") == 0)
            sort_simple(&a, &b);
        else if (ft_strcmp(argv[1], "--medium") == 0)
            sort_medium(&a, &b);
        else if (ft_strcmp(argv[1], "--complex") == 0)
            sort_complex(&a, &b);
		else if (ft_strcmp(argv[1], "--adaptive") == 0)
            sort_adaptive(&a, &b);		
        else
            sort_500(&a, &b);  // adaptatif par défaut
    }
    free_stack(a);
    free_stack(b);
    return (0);
}

/* int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;
	int				size;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	init_stack_a(&a, &argv[1]);
	index_stack(a);

	if (!is_sorted(a))
	{
		size = stack_size(a);
		if (size <= 3)
			sort_3(&a); // implémenter sort_3 si nécessaire
		else if (size <= 100)
			sort_100(&a, &b);
		else
			sort_500(&a, &b); // pour 500 nombres
	}
	free_stack(a);
	free_stack(b);
	return (0);
} */
