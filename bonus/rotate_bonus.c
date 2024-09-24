/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:23:01 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/09/21 18:53:28 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rotate(t_node **stack)
{
	t_node	*head;
	t_node	*bottom;

	if (!*stack)
		return ;
	if (stack && *stack && (*stack)->next)
	{
		head = *stack;
		bottom = *stack;
		while (bottom->next != NULL)
		{
			bottom = bottom->next;
		}
		*stack = head->next;
		bottom->next = head;
		head->next = NULL;
	}
}
