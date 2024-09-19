/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:23:59 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/09/19 22:50:45 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_node **stack)
{
	t_node	*befbottom;
	t_node	*bottom;
	t_node	*head;

	if (!*stack)
		return ;
	if (stack && *stack && (*stack)->next)
	{
		befbottom = *stack;
		head = *stack;
		while (befbottom->next->next != NULL)
		{
			befbottom = befbottom->next;
		}
		bottom = befbottom->next;
		(*stack) = bottom;
		bottom->next = head;
		befbottom->next = NULL;
	}
}

void	rra(t_node **stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_node **stack_b)
{
	reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
}
