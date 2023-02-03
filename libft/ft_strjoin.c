/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:44:13 by hlakhal-          #+#    #+#             */
/*   Updated: 2022/11/01 14:45:06 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		j;
	int		i;
	char	*newstr;

	i = 0;
	j = 0;
	if (!s2 || !s1)
		return (NULL);
	newstr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!newstr)
		return (0);
	while (i < (int)ft_strlen(s1))
	{
		newstr[i] = s1[i];
		i++;
	}
	while (j < (int)ft_strlen(s2))
	{
		newstr[i++] = s2[j];
		j++;
	}
	newstr[i] = '\0';
	return (newstr);
}
