/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 23:04:46 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/09/16 23:27:05 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    max(t_node *stack)
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
