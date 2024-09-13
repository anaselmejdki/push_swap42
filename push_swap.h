/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 19:49:36 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/09/13 23:01:00 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
#define PUSH_SWAP

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

typedef struct s_node{
    int value;
    struct s_node *next;
}   t_node;

//Functions
long int ft_atoi(char *str);
void    free_kolxi(char **str);
char	**ft_split(char *str, char c);
int is_valid(char *str);
int	fill_stack_a(t_node **stack, char **av);
void    create_and_add_node(t_node **stack_a, long nbr);

#endif