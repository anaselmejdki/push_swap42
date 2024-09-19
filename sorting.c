/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 19:48:18 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/09/19 22:48:21 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_node **stack)
{
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
	else
		return ;
}

void	sort_3(t_node **stack)
{
	if ((*stack)->value == ft_max(*stack))
		ra(stack);
	else if ((*stack)->next->value == ft_max(*stack))
		rra(stack);
	sort_2(stack);
}

void	sort_4(t_node **stack_a, t_node **stack_b)
{
	if ((*stack_a)->value == ft_min(*stack_a))
		pb(stack_a, stack_b);
	else if ((*stack_a)->next->value == ft_min(*stack_a))
	{
		sa(stack_a);
		pb(stack_a, stack_b);
	}
	else if ((*stack_a)->next->next->value == ft_min(*stack_a))
	{
		ra(stack_a);
		ra(stack_a);
		pb(stack_a, stack_b);
	}
	else if ((*stack_a)->next->next->next->value == ft_min(*stack_a))
	{
		rra(stack_a);
		if (check_sort(*stack_a))
			return ;
		pb(stack_a, stack_b);
	}
	sort_3(stack_a);
	pa(stack_b, stack_a);
}

void	sort_5(t_node **stack_a, t_node **stack_b)
{
	if ((*stack_a)->value == ft_min(*stack_a))
		pb(stack_a, stack_b);
	else if ((*stack_a)->next->value == ft_min(*stack_a))
	{
		sa(stack_a);
		pb(stack_a, stack_b);
	}
	else if ((*stack_a)->next->next->value == ft_min(*stack_a))
		revpush(stack_a, stack_b);
	else if ((*stack_a)->next->next->next->value == ft_min(*stack_a))
	{
		rra(stack_a);
		rra(stack_a);
		pb(stack_a, stack_b);
	}
	else if ((*stack_a)->next->next->next->next->value == ft_min(*stack_a))
	{
		rra(stack_a);
		if (check_sort(*stack_a))
			return ;
		pb(stack_a, stack_b);
	}
	sort_4(stack_a, stack_b);
	pa(stack_b, stack_a);
}

void	sorting(t_node **stack_a, t_node **stack_b, int len)
{
	if (len == 2)
		sort_2(stack_a);
	else if (len == 3)
		sort_3(stack_a);
	else if (len == 4)
		sort_4(stack_a, stack_b);
	else if (len == 5)
		sort_5(stack_a, stack_b);
	else
		sort_stack(stack_a, stack_b, len);
}
