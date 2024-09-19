/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:21:53 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/09/17 16:50:18 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;

	if (!*stack_a)
		return ;
	tmp = (*stack_a)->next;
	(*stack_a)->next = (*stack_b);
	(*stack_b) = (*stack_a);
	(*stack_a) = tmp;
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	push(stack_a, stack_b);
	write(1, "pb\n", 3);
}

void	pa(t_node **stack_b, t_node **stack_a)
{
	push(stack_b, stack_a);
	write(1, "pa\n", 3);
}
