/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:22:24 by hlakhal-          #+#    #+#             */
/*   Updated: 2022/11/02 19:29:35 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (!haystack && len == 0)
		return (0);
	if (*(needle + j) == '\0')
		return ((char *)(haystack));
	while (haystack[i] && i < len)
	{
		while (*(haystack + i + j) == *(needle + j) && *(haystack + j
				+ i) != '\0' && i + j < len)
		{
			j++;
		}
		if (*(needle + j) == '\0')
		{
			return ((char *)(haystack + i));
		}
		i++;
		j = 0;
	}
	return (NULL);
}
