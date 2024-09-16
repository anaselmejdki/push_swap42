/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 19:49:36 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/09/16 23:16:46 by ael-mejd         ###   ########.fr       */
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
int	duplicate(t_node *stack);
int size_of_stack(t_node *stack);
int check_sort(t_node *stack);
void sort_stack(t_node *stack);
void    sorting(t_node **stack_a, t_node **stack_b, int len);
int    max(t_node *stack);

//Instructions
//swap
void swap(t_node **stack);
void sa(t_node **stack_a);
void sb(t_node **stack_b);
void ss(t_node **stack_a, t_node **stack_b);

//rotate
void    rotate(t_node **stack);
void    ra(t_node **stack_a);
void    rb(t_node **stack_b);
void    rr(t_node **stack_a, t_node **stack_b);

//push
void    push(t_node **stack_a, t_node **stack_b);
void    pb(t_node **stack_a, t_node **stack_b);
void    pa(t_node **stack_b, t_node **stack_a);

//reverse rotate
void    reverse_rotate(t_node **stack);
void    rra(t_node **stack_a);
void    rrb(t_node **stack_b);
void    rrr(t_node **stack_a, t_node **stack_b);
#endif