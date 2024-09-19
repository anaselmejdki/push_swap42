/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 22:47:37 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/09/19 22:47:39 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_node **stack)
{
	t_node	*node;

	while (*stack)
	{
		node = *stack;
		*stack = node->next;
		free(node);
	}
}

int	main(int ac, char **av)
{
	int		len;
	t_node	*stack_a;
	t_node	*stack_b;

	if (ac < 2)
		return (write(1, "ERROR\n", 6), 0);
	stack_a = NULL;
	stack_b = NULL;
	if (fill_stack_a(&stack_a, av) == 0 || duplicate(stack_a) == 0)
	{
		write(1, "ERROR\n", 6);
		free_stack(&stack_a);
		return (0);
	}
	len = size_of_stack(stack_a);
	if (check_sort(stack_a) == 1)
	{
		free_stack(&stack_a);
		return (0);
	}
	else
		sorting(&stack_a, &stack_b, len);
	free_stack(&stack_a);
}
