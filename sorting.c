/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 19:48:18 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/09/16 23:45:56 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_2(t_node **stack)
{
    if ((*stack)->value > (*stack)->next->value)
        sa(stack);
    else
        return ;
}

void    sort_3(t_node **stack)
{
    if ((*stack)->value == max(*stack))
        ra(stack);
    else if ((*stack)->next->value == max(*stack))
        rra(stack);
    sort_2(stack);
}

void    sort_4(t_node **stack_a, t_node **stack_b)
{
    
}
void    sorting(t_node **stack_a, t_node **stack_b, int len)
{
    (void)stack_b;
    if (len == 2)
        sort_2(stack_a);
    else if (len == 3)
        sort_3(stack_a);
}