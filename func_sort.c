/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 23:04:46 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/09/19 21:47:41 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    ft_max(t_node *stack)
{
    t_node *head;
    int max;

    head = stack;
    max = head->value;
    while (head)
    {
        if (head->value > max)
            max = head->value;
        head = head->next;       
    }   
    return (max);
}

int ft_min(t_node *stack)
{
    t_node *head;
    int min;

    head = stack;
    min = head->value;
    while (head)
    {
        if (head->value < min)
            min = head->value;
        head = head->next;
    }
    return (min);
}

void    revpush(t_node **stack_a, t_node **stack_b)
{
    ra(stack_a);
    ra(stack_a);
    pb(stack_a, stack_b);
}

int *fill_array(t_node **stack, int *array, int len)
{
    t_node *head;
    int i;

    i = 0;
    head = *stack;
    while (head && i < len)
    {
        array[i] = head->value;
        i++;
        head = head->next;
    }
    return (array);
}

void    sort_array(int *array, int len)
{
    int i;
    int tmp;

    i = 0;
    while (i < len)
    {
        if (array[i] > array[i + 1])
        {
            tmp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = tmp;
            i = 0;
        }
        else
            i++;
    }
}
