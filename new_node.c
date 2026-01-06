/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastiangranier <bastiangranier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 14:17:02 by bgranier          #+#    #+#             */
/*   Updated: 2025/12/28 22:20:10 by bastiangran      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

t_stack_node	*new_node(int value)
{
	t_stack_node	*node;

	node = malloc(sizeof(t_stack_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = -1;
	node->next = NULL;
	return (node);
}


/* t_stack_node *new_node(int value)
{
    t_stack_node *node;

    node = malloc(sizeof(t_stack_node));
    if (!node)
        return NULL;
    node->value = &value;
    node->next = NULL;
    return node;
	free(node);
}
 */