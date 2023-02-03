/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:19:34 by hlakhal-          #+#    #+#             */
/*   Updated: 2022/11/01 18:00:49 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	i = 0;
	dlen = 0;
	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dstsize < dlen)
		return (dstsize + slen);
	else if (dstsize > dlen)
	{
		while (src[i] && i < dstsize - dlen - 1)
		{
			dst[dlen + i] = src[i];
			i++;
		}
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
