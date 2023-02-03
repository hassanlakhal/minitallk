/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:18:35 by hlakhal-          #+#    #+#             */
/*   Updated: 2022/11/02 19:43:28 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_end(char const *s1, char const *set, int cont)
{
	int	j;

	j = ft_strlen(s1);
	while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > cont)
		j--;
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*pt;
	int			cont;
	int			end;

	if (!s1 || !set)
		return (NULL);
	cont = 0;
	if (!s1)
		return (NULL);
	if (s1 == set || !(*s1))
		return (ft_strdup(""));
	while (s1[cont] && ft_strchr(set, s1[cont]) != NULL)
		cont++;
	end = check_end(s1, set, cont);
	pt = (char *)malloc(sizeof(char) * (end - cont + 1));
	if (pt)
		ft_strlcpy((char *)pt, s1 + cont, end - cont + 1);
	return ((char *)pt);
}
