/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func2_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:40:02 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/09/19 21:47:55 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_to_a(t_node **stack_a, t_node **stack_b)
{
	int max;
	int max_position;

	max = ft_max(*stack_b);
	max_position = ft_max_position(*stack_b, max);
		
	while(size_of_stack(*stack_b) > 0)
	{
		if (max == (*stack_b)->value)
		{
			pa(stack_b, stack_a);
			if(size_of_stack(*stack_b) > 0)
			{
				max = ft_max(*stack_b);
				max_position = ft_max_position(*stack_b, max);
			}
		}
		else
		{
			if (max_position <= (size_of_stack(*stack_b) / 2))
				rb(stack_b);
			else
				rrb(stack_b);
		}
	}
}

void push_to_b(t_node **stack_a, t_node **stack_b, int chank)
{
	int i;
	int len;

	len = size_of_stack(*stack_a);
	i = 0;
	while (i < len)
	{
		if ((*stack_a)->index <= i)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			i++;
		}
		else if ((*stack_a)->index <= (i + chank))
		{
			pb(stack_a, stack_b);
			i++;
		}
		else if (get_index_position(stack_a, (chank + i)) < (size_of_stack(*stack_a) / 2 ))
			ra(stack_a);
		else 
			rra(stack_a);		
	}
	push_to_a(stack_a, stack_b);
}

void    sort_stack(t_node **stack_a, t_node **stack_b, int len)
{
    int *array;

    array = malloc(sizeof(int) * len);
    if (!array)
        return ;
    array = fill_array(stack_a, array, len);
    sort_array(array, len);
    get_index(stack_a, array, len);
    if (len < 250)
        push_to_b(stack_a, stack_b, 15);
    else
        push_to_b(stack_a, stack_b, 40);
}
