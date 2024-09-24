/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_lines_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:11:37 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/09/21 18:30:08 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	read_double_lines(t_node **stack_a, t_node **stack_b, char *next_line)
{
	if (ft_strcmp(next_line, "rrr\n") == 0)
	{
		reverse_rotate(stack_a);
		reverse_rotate(stack_b);
	}
	else if (ft_strcmp(next_line, "ss\n") == 0)
	{
		swap(stack_a);
		swap(stack_b);
	}
	else if (ft_strcmp(next_line, "rr\n") == 0)
	{
		rotate(stack_a);
		rotate(stack_b);
	}
	else if (ft_strcmp(next_line, "rra\n") == 0)
		reverse_rotate(stack_a);
	else if (ft_strcmp(next_line, "rrb\n") == 0)
		reverse_rotate(stack_b);
	else
		return (0);
	return (1);
}

int	read_lines(t_node **stack_a, t_node **stack_b)
{
	char	*next_line;

	next_line = get_next_line(0);
	while (next_line)
	{
		if (ft_strcmp(next_line, "sa\n") == 0)
			swap(stack_a);
		else if (ft_strcmp(next_line, "sb\n") == 0)
			swap(stack_b);
		else if (ft_strcmp(next_line, "pa\n") == 0)
			push(stack_b, stack_a);
		else if (ft_strcmp(next_line, "pb\n") == 0)
			push(stack_a, stack_b);
		else if (ft_strcmp(next_line, "ra\n") == 0)
			rotate(stack_a);
		else if (ft_strcmp(next_line, "rb\n") == 0)
			rotate(stack_b);
		else if (read_double_lines(stack_a, stack_b, next_line) == 1)
			;
		else
			return (0);
		free(next_line);
		next_line = get_next_line(0);
	}
	return (1);
}
