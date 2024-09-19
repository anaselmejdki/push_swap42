/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func3_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:46:06 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/09/19 21:51:26 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    get_index(t_node **stack, int *array, int len)
{
    t_node *head;
    int i;

    i = 0;
    while (i < len)
    {
        head = *stack;
        while (head)
        {
            if (head->value == array[i])
            {
                head->index = i;
                break;
            }
            head = head->next;
        }
        i++;
    }
}

int get_index_position(t_node **stack, int chunk)
{
    t_node *head;
    int i;

    head = *stack;
    i = 0;
    while (i < size_of_stack(head))
    {
        if (head->index < chunk)
            break;
        head = head->next;
        i++;
    }
    return (i);
}

int ft_max_position(t_node *stack, int max)
{
    t_node *head;
    int i;
    
    head = stack;
    i = 0;
    while (head)
    {
        if (head->value == max)
            break;
        head = head->next;
        i++;
    }
    return (i);
}