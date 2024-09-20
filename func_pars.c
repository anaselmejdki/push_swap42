/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_pars.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 09:57:44 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/09/21 00:45:23 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_all(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

long long	ft_atoi(char *str)
{
	int			i;
	int			s;
	long long	r;

	i = 0;
	s = 1;
	r = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - '0';
		i++;
	}
	r = r * s;
	if (r > INT_MAX || r < INT_MIN)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	return (r * s);
}

int	is_valid(char *str)
{	
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (1);
		else
			return (0);
		i++;
	}
	return (0);
}
