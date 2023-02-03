/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:47:43 by hlakhal-          #+#    #+#             */
/*   Updated: 2022/10/31 15:09:53 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*str_1;
	size_t			i;

	i = 0;
	str = dst;
	str_1 = (unsigned char *)src;
	if (str == str_1)
		return (str);
	while (i < n)
	{
		str[i] = str_1[i];
		i++;
	}
	return (dst);
}
