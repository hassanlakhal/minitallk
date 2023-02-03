/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 02:53:32 by hlakhal-          #+#    #+#             */
/*   Updated: 2022/11/01 14:25:56 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cont_len_word(char const *str, char c, int *i)
{
	int	len;

	len = 0;
	while (str && str[*i])
	{
		if (str[*i] == c)
		{
			break ;
		}
		len++;
		(*i)++;
	}
	return (len);
}

static int	numbers_word(char const *s, char c)
{
	int	i;
	int	j;
	int	a;

	i = 0;
	j = 0;
	a = 1;
	while (s && s[i])
	{
		if (s[i] != c && a)
		{
			a = 0;
			j++;
		}
		if (s[i] == c)
			a = 1;
		i++;
	}
	return (j);
}

static void	free_result(char **str)
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

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		k;
	int		j;

	k = 0;
	i = 0;
	result = malloc(sizeof(char *) * ((numbers_word(s, c)) + 1));
	if (!result)
		return (NULL);
	while (s && s[i])
	{
		if (s[i] == c && ++i)
			continue ;
		j = i;
		result[k] = ft_substr(s, j, cont_len_word(s, c, &i));
		if (!result[k++])
		{
			free_result(result);
			return (NULL);
		}
	}
	result[k] = NULL;
	return (result);
}
