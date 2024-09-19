/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:20:40 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/09/03 18:21:39 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node **stack)
{
	t_node	*head;
	t_node	*node_next;
	int		tmp;

	if (stack && *stack && (*stack)->next)
	{
		head = *stack;
		node_next = (*stack)->next;
		tmp = head->value;
		head->value = node_next->value;
		node_next->value = tmp;
	}
}

void	sa(t_node **stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}

void	sb(t_node **stack_b)
{
	swap(stack_b);
	write(1, "sb\n", 3);
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
}
