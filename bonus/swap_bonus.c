/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:20:40 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/09/21 18:30:30 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	swap(t_node **stack)
{
	t_node	*head;
	t_node	*node_next;
	int		tmp;

	if (stack && *stack && (*stack)->next)
	{
		head = *stack;
		node_next = (*stack)->next;
		tmp = head->value;
		head->value = node_next->value;
		node_next->value = tmp;
	}
}
