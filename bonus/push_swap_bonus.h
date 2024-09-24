/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:52:41 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/09/21 18:54:30 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char				*get_next_line(int fd);
char				*ft_strjoin(char *line, char *buffer);
size_t				ft_strlen(const char *s);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}					t_node;

// Functions
long double			ft_atoi(char *str);
void				free_all(char **str);
char				**ft_split(char *str, char c);
int					is_valid(char *str);
int					fill_stack_a(t_node **stack, char **av);
void				create_and_add_node(t_node **stack_a, long nbr);
int					duplicate(t_node *stack);
int					size_of_stack(t_node *stack);
int					check_sort(t_node *stack);
int					ft_strcmp(char *s1, char *s2);
int					read_lines(t_node **stack_a, t_node **stack_b);
void				sorting(t_node **stack_a, t_node **stack_b, int len);
int					ft_strcmp(char *s1, char *s2);

// Instructions
// swap
void				swap(t_node **stack);

// rotate
void				rotate(t_node **stack);

// push
void				push(t_node **stack_a, t_node **stack_b);

// reverse rotate
void				reverse_rotate(t_node **stack);

#endif