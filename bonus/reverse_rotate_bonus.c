/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:23:59 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/09/21 18:53:35 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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
