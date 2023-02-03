/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitao.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 01:31:46 by hlakhal-          #+#    #+#             */
/*   Updated: 2022/11/10 16:51:51 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static int	number_chifr(unsigned long nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

static char	*cpy(char *str, long int n, int len)
{
	long int	j;
	char		*pt;

	j = 0;
	pt = (char *)str;
	pt[len] = '\0';
	while (sizeof(n) == sizeof(long int) && n)
	{
		j = n / 10;
		if (j == 0)
		{
			ft_memset(pt + len - 1, n + '0', sizeof(char));
			n = 0;
			len--;
		}
		if (j)
		{
			n = n % 10 + '0';
			ft_memset(pt + len - 1, n, sizeof(char));
			len--;
			n = j;
		}
	}
	return ((char *)pt);
}

char	*ft_uitoa(unsigned int n)
{
	char			*pt;
	int				len;
	unsigned long	x;

	x = (long int)n;
	len = number_chifr(x);
	pt = (char *)malloc((len + 1) * sizeof(char));
	if (!pt)
		return (NULL);
	if (x > 0)
	{
		pt = (char *)cpy(pt, x, len);
	}
	else
	{
		pt[0] = '0';
		pt[1] = '\0';
	}
	return ((char *)pt);
}
