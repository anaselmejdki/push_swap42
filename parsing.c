/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:57:29 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/09/15 00:11:11 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    create_and_add_node(t_node **stack_a, long nbr)
{
    t_node *new_node;

    new_node = (t_node *)malloc(sizeof(t_node));
    if (!new_node)
        return ;
    new_node->value = nbr;
    new_node->next = NULL;
    if (!*stack_a)
    {
        *stack_a = new_node;
        return ;
    }
    t_node *node;
    node = *stack_a;
    while (node->next != NULL)
        node = node->next;
    node->next = new_node;
}

int	fill_stack_a(t_node **stack, char **av)
{
	char **split;
	int i;
	int j;

	i = 1;
	while (av[i])
	{
		split = ft_split(av[i], ' ');
		if (!split[0])
			return (free_kolxi(split), 0);
		j = 0;
		while (split[j])
		{
			if (is_valid(split[j]) == 0)
				return (free_kolxi(split), 0);
			if (ft_atoi(split[j]) > INT_MAX || ft_atoi(split[j]) < INT_MIN)
				return (free_kolxi(split), 0);
			create_and_add_node(stack, ft_atoi(split[j]));
			j++;
		}
		free_kolxi(split);
		i++;
	}
	return (1);
}

int	duplicate(t_node *stack)
{
	t_node *stack_a;
	t_node *stack_b;
	
	stack_a = stack;
	while (stack_a != NULL)
	{
		stack_b = stack_a->next;
		while (stack_b != NULL)
		{
			if (stack_b->value == stack_a->value)
				return (0);
			stack_b = stack_b->next;
		}
		stack_a = stack_a->next;
	}
	return (1);
}

int size_of_stack(t_node *stack)
{
	t_node *node;
	int i;

	node = stack;
	i = 0;
	while (node)
	{
		node = node->next;
		i++;
	}
	return (i);
}

int check_sort(t_node *stack)
{
	t_node *head;
	
	head = stack;
	while (head && head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}