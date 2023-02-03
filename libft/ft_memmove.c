/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:26:42 by hlakhal-          #+#    #+#             */
/*   Updated: 2022/11/02 19:03:45 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str;
	unsigned char	*str_1;
	size_t			i;

	i = 0;
	str = dst;
	str_1 = (unsigned char *)src;
	if (!str && !str_1)
		return (0);
	if (str_1 > str)
		ft_memcpy(str, str_1, len);
	else if (str_1 < str)
	{
		while (i < len)
		{
			str[len - i - 1] = str_1[len - i - 1];
			i++;
		}
	}
	return (dst);
}
