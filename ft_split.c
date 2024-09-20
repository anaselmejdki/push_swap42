/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:36:40 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/09/20 22:25:57 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_word(char *str, char c)
{
	int	count;
	int	flag;
	int	i;

	i = 0;
	flag = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (str[i] == c)
			flag = 0;
		i++;
	}
	return (count);
}

int	word_length(char *str, char c)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

char	*copy_word(char *str, int len)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

int	fucking_25(char **split, char *str, int i, char c)
{
	int	len;

	len = word_length(str + i, c);
	split[0] = copy_word(str + i, len);
	if (!split[0])
		return (0);
	return (len);
}

char	**ft_split(char *str, char c)
{
	char	**split;
	int		i;
	int		len;
	int		j;

	i = 0;
	j = 0;
	split = (char **)malloc(sizeof(char *) * (count_word(str, c) + 1));
	if (!split)
		return (NULL);
	while (str[i])
	{
		if (str[i] != c)
		{
			len = fucking_25(&split[j], str, i, c);
			if (!len)
				return (free_all(split), NULL);
			j++;
			i += len;
		}
		else
			i++;
	}
	split[j] = NULL;
	return (split);
}
