/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:23:01 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/09/03 18:23:42 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_node **stack)
{
	t_node	*head;
	t_node	*bottom;

	if (!*stack)
		return ;
	if (stack && *stack && (*stack)->next)
	{
		head = *stack;
		bottom = *stack;
		while (bottom->next != NULL)
		{
			bottom = bottom->next;
		}
		*stack = head->next;
		bottom->next = head;
		head->next = NULL;
	}
}

void	ra(t_node **stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_node **stack_b)
{
	rotate(stack_b);
	write(1, "rb\n", 3);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}
